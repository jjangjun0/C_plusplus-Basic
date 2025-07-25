#include <iostream>
#include <limits.h>
#include <conio.h> // Console Input/Output
#include <cstdlib>
using namespace std;

int main(void)
{
    system("cls");
    int a = 10, b = 20; // 10진수
    int w = 0x42;       // 16진수
    int p = 042;        // 8진수

    cout << "a = " << a << " b = " << b << "\n";
    cout << "w = " << w << "\n" << "p = " << p << "\n";
    cout << "INT_MIN : " << INT_MIN << "\n";
    cout << "INT_MAX : " << INT_MAX << "\n";
    float c, d;
    c = 10.55, d = 20.77;
    cout << "c = " << c << " d = " << d << "\n";
    getch();

    return 0;
}