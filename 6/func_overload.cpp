#include <iostream>
using namespace std;

void print(char, int);
void print(int, int);
void print(char);

int sum(int a, int b);
float sum(float a, float b);

int main(void)
{
    /* 함수의 오버로딩
    함수의 다형 : 다양한 형태를 지님
    함수의 오버로딩 : 여러 개의 함수를 같은 이름으로 연결
    
    오버로딩 함수 사용: 다른 유형의 변수들이지만 같은 류의 작업을 할 때
    // 
        print('a', 3);
        print(3, 2);
        print('a');
    //
    사용할 수 없을 때:
        1. 함수의 리턴형만 다른 경우 -> 함수의 이름, 파라미터의 (개수 & 대응되는 타입)을 가지는 함수일 때
        2. 함수를 사용할 때, 두 개 이상의 함수에 대응되는 경우 -> 템플릿 변수에 대해서...
    */
    int a, b;
    cout << "두 정수를 입력하시오 : ";
    cin >> a >> b;
    cout << "두 정수의 합은 " << sum(a, b) << "입니다.\n";
    
    float c, d;
    cout << "두 실수를 입력하시오 : ";
    cin >> c >> d;
    cout << "두 실수의 합은 " << sum(c, d) << "입니다." << endl;

    return 0;
}

int sum(int a, int b) {
    return a + b;
}
float sum(float a, float b) {
    return a + b;
}