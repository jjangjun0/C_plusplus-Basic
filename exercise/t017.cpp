#include <iostream>

using namespace std;

int fun_11(int, int); // 함수 선언

int main(void)
{
    int a = 10, b = 20, c;

    c = fun_11(a, b); // 함수 호출
    cout << a << " + " << b << " = " << c << "\n";

    return 0;
}
int fun_11(int a, int b) {
    int p;

    p = a + b;
    return p;
}