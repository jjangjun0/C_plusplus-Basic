#include <iostream>
using namespace std;

// 데이터의 은닉 효과 : 직접 접근 X
// public에 있는 함수를 통해서만이 private 멤버 변수를 변경할 수 있다.
class Stock {
    private:
        string name;
        int shares;
        float share_val;
        double total_val;
        void set_total() { total_val = shares * share_val; }
    public:
        void buy(int, float);
        void sell(int, float);
        void update(float);
        void show();
        Stock topval(Stock &);

        Stock(string, int, float);
        Stock();
        ~Stock();
};

// 사용 범위 결정 연산자 '::' //
void Stock::buy(int n, float pr) {
    shares += n;
    share_val = pr;
    set_total();
}
void Stock::sell(int n, float pr) {
    shares -= n;
    share_val = pr;
    set_total();
}
void Stock::update(float pr) {
    share_val = pr;
    set_total();
}
void Stock::show() {
    cout << "-------------------------\n";
    cout << "회사 명: " << name << "\n";
    cout << "주식 수: " << shares << "\n";
    cout << "주가: " << share_val << "\n";
    cout << "주식 총 가치: " << total_val << endl;
}
Stock Stock::topval(Stock &s) {
    if (s.share_val > share_val)
        return s;
    else
        return *this; // this 연산자
}

// 생산자
Stock::Stock(string co, int n, float pr)
{
    name = co;
    shares = n;
    share_val = pr;
    set_total();
}
Stock::Stock() {
    name = "";
    shares = 0;
    share_val = 0;
    set_total();
}
// 소멸자
Stock::~Stock()
{
    cout << "\'" << name << "\' class가 소멸되었습니다\n";
}

int main(void)
{
    // 데이터형이란 : 데이터형을 대상으로 어떠한 연산을 수행할 수 있는가?
    // 클래스란 : 추상화를 사용자 정의 데이터형으로 변환해주는 수단
    // 추상화란 :어떠한 객체를 사실적으로 표현하는 것이 아니라, 공통된 특징을 간결한 방식으로, 이해하기 쉽게 표현하는 것

    // 예제 1번
    int a = 3;
    int b = 4;
    cout << sizeof(a) << "bytes" << endl;

    int *a_ = &a;
    int *b_ = &b;
    cout << sizeof(a_) << "bytes" << endl;

    Stock Jun = Stock("Junyo", 100, 500); // 사용자 정의형 변수
    Jun.show();
    Jun.buy(10, 1200);
    Jun.show();
    Jun.sell(5, 800);
    Jun.show();
    cout << endl;

    // 예제 2번
    cout << "생성자를 이용하여 객체 생성\n";
    Stock temp = Stock("Panda", 100, 1000);
    cout << "디폴트 생성자를 이용하여 객체 생성\n";
    Stock temp2;
    cout << "temp를 temp2에 대입\n";
    temp2 = temp;
    cout << "temp와 temp2를 출력\n";
    temp.show();
    temp2.show();

    cout << "\n생성자를 이용하여 temp 내용 재설정\n";
    temp = Stock("Coding", 200, 1000); // "Coding" 임시 객체가 복사 후에 더이상 참조하지 않기에 소멸된다.
    temp.show();
    cout << "\n";

    // 예제 3번
    Stock s1("A", 10, 1000);
    Stock s2("B", 20, 1000);

    s1.show();
    s2.show();

    cout << "A와 B중 share_val이 큰 객체는 : \n";
    s1.topval(s2).show();

    // 예제 4번
    Stock s_arr[4] = {
        Stock("A1", 10, 1000),
        Stock("B2", 10, 1000),
        Stock("C3", 10, 1000),
        Stock("D4", 10, 1000)
    };
    s_arr[0].show();

    Stock first = s_arr[0];
    for (int i = 1; i < 4; i++)
        first = first.topval(s_arr[i]);
    
    cout << "\n가장 큰 top_val의 객체\n";
    first.show();
    cout << endl;

    return 0;
}