#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int *a;
    a = &n;
    *a = 12;

    cout << "&n : " << &n << "\n";
    cout << "a = " << a << "\n";
    cout << "n = " << n << "\n";
    cout << "*a = " << *a << "\n";
    cout << "&a = " << &a << "\n"; // 포인터 변수의 주소
    return 0;
}