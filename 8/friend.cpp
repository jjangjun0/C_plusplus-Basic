#include <iostream>
#include "time.h"
using namespace std;

int main(void)
{
    // C++ friend -> public 함수 말고도 구조체의 private 변수에 접근할 수 있는 또다른 통로.

    // 이항 연산자: 두 개의 피연산자를 요구하는 연산자
    // operator* 의 경우...
    //Time a, b;
    //a = b * 3;
    //a = b.operator*(3);
    Time t1(1, 20);
    Time t2;
    Time t3;
    Time t4;

    t2 = 3 * t1;
    t3 = operator*(3, t1);
    t4 = t1 * 3;

    // Interface : 특정 기능을 구현할 것을 약속한 추상 형식
    // 좁은 의미 : 순사 가상 함수만을 갖는 클래스
    // 넓은 의미 : 앞으로 프로그램을 어떻게 짤 것인가에 대한 약속
    t1.show();
    t2.show();
    t3.show();
    t4.show();
    
    return 0;
}