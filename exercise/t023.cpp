#include <iostream>
using namespace std;

void fun_11(void);
static int a = 333; // 전역 변수 선언 "{} 블록 밖"

int main(void)
{
    int a = 20; // 지역 변수 선언 "{} 블록 안"
    cout << "a1 = " << a << "\n";
    fun_11();
    return 0;
}

void fun_11(void) {
    a += 100;
    cout << "a2 = " << a << "\n";
}