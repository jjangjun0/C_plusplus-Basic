#include <iostream>
using namespace std;

void print_fun(int a = 55, int b = 77, int c = 99) {
    // 인자의 기정값을 지정한 함수 //
    cout << "a = " << a << ", b = " << b << ", c = " << c << "\n";
}

int main(void)
{
    print_fun();
    print_fun(-3);
    print_fun(-3, -5);
    print_fun(-3, -5, -7);

    return 0;
}