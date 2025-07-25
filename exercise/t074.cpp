#include <iostream>
#include <string.h>

using namespace std;

class parent {
    protected:          // private 이면 상속받은 자식 클래스가 접근하지 못한다.
        char irum[14];
        int nai;
    public:
        parent(char [], int);
        ~parent() {};
        void prin_parent(void);
};
parent::parent(char n[], int a):nai(a) {
    // 객체 생성하면서 nai 멤버를 선언과 동시에 입력받은 a로 초기화, 보통 const 멤버랑 참조 멤버는 필수
    // 위의 방식이 성능이 더 좋다.
    strcpy(this->irum, n);
}
void parent::prin_parent(void) {
    cout << "아버지 이름 : " << this->irum << ", ";
    cout << "아버지 나이 : " << this->nai << "\n";
}

class son : parent {
    private:
        float weight;
    public:
        son(char [], int, float);
        void prin_son(void);
};
son::son(char n[], int a, float w) : parent(n, a) {     // 부모 클래스 parent를 호출
    // parent(n, a); // 의미 없다. 부모 생성자를 호출할 수 없다. => 이미 부모가 초기화된 후다.
    // 부모 CLASS 메모리 공간 생성 -> 부모 클래스 생성자 호출 ->
    // 자식 CLASS 메모리 공간 생성 -> 자식 클래스 생성자 호출 과 같은 실행 순서를 가진다.
    // 그래서 꼭 부모의 생성자를 Initializer List(이니셜라이저 리스트)로 표현해야 한다. {: parent(n, a)}
    // type은 쓰지 않아도 되고, 어떤 인자를 넘길 것인지만 작성하면 된다.
    
    this->weight = w;
}
void son::prin_son(void) {
    cout << "아들 이름 : " << this->irum << ", ";
    cout << "아들 나이 : " << this->nai << ", ";
    cout << "아들 몸무게 : " << this->weight << "\n";
}

class daughter : parent {
    private:
        float weight;
        float length;
    public:
        daughter(char [], int, float, float);
        void prin_daughter(void);
};
daughter::daughter(char n[], int a, float w, float l) : parent(n, a) {
    this->weight = w;
    this->length = l;
}
void daughter::prin_daughter(void) {
    cout << "딸의 이름 : " << irum << ", ";
    cout << "딸의 나이 : " << nai << ", ";
    cout << "딸의 몸무게 : " << weight << ", ";
    cout << "딸의 키 : " << length << "\n";
}

int main(void)
{

    /*      접근 지정자	    같은 클래스 내부	상속받은 자식 클래스	외부 객체 접근
            private	        ✅ 가능	            ❌ 불가능	        ❌ 불가능
            protected	    ✅ 가능	            ✅ 가능	            ❌ 불가능
            public	        ✅ 가능	            ✅ 가능	            ✅ 가능         */
    
    parent mon("박성진", 45);
    mon.prin_parent();
    cout << "\n";

    son boy("박재우", 17, 55.5);
    boy.prin_son();
    cout << "\n";

    daughter girl("박미숙", 13, 33.5, 110.5);
    girl.prin_daughter();

    return 0;
}