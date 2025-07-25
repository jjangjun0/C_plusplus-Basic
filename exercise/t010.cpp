#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(void)
{
    int a = 33, b = 7;
    cout << "a > b --> " << (a > b) << ", "; // 조건이 참이면 1
    cout << "a < b --> " << (a < b) << ", "; // 조건이 거짓이면 0
    cout << "a == b --> " << (a == b) << ", ";
    cout << "a != b --> " << (a != b) << "\n";
    cout << "----- ----- ----- -----\n";

    cout << "!(a > b) --> " << !(a > b) << "\n";
    cout << "a > b && b == 5 --> " << ((a > b) && (b == 5)) << "\n";
    cout << "a < 5 || b > 5 --> " << ((a < 5) || (b > 5)) << "\n";
    cout << "----- ----- ----- -----\n";

    a = 10;
    cout << "a++ = " << a++ << ", ";
    cout << "++a = " << ++a << "\n";
    cout << "a-- = " << a-- << ", ";
    cout << "--a = " << --a << "\n";
    getch();
    system("cls");

    a = 10, b = 5; // 10 -> 1010(2)  [AND]  5 -> 0101(2)
    cout << "a & b --> " << (a & b) << "\n";    // 1 0 1 0 -> 10 (AND 연산)
    cout << "a | b --> " << (a | b) << "\n";    // 0 1 0 1 -> 5  (OR 연산)
    cout << "a ^ b --> " << (a ^ b) << "\n";    // _ _ _ _ -> ^  (XOR 연산)
    cout << "~a --> " << (~a) << "\n";          // 0 1 0 1 -> 최상위 비트 1 => 16 - 4 - 1 = 11, 따라서 -11
    cout << "----- ----- ----- -----\n";

    int x = 100;
    cout << "원본 : x = " << x << "\n";
    x >>= 1; // x값을 2로 나눈 것과 동일하다. (1비트를 오른쪽으로 이동)
    cout << ">>= 결과 : x = " << x << "\n";
    x <<= 1; // x값을 2로 곱한 것과 동일하다. (1비트를 왼쪽으로 이동)
    cout << "<<= 결과 : x = " << x << "\n";
    cout << "----- ----- ----- -----\n";

    /* Type Casting */
    a = 10, b = 3;
    float c, d;
    c = a / b;
    d = (float)a / b; // a의 값을 실수형으로 변환해서 연산
    cout << "c = " << fixed << setprecision(2) << setiosflags(ios::showpoint) << c << "\n";
    cout << "d = " << fixed << setprecision(2) << d << "\n";
    cout << "----- ----- ----- -----\n";

    /* sizeof() */
    cout << "a = " << sizeof(a) << "bytes" << ", ";
    cout << "c = " << sizeof(c) << "bytes" << "\n";
    cout << "char = " << sizeof(char) << "byte" << ", ";
    cout << "unsigned short = " << sizeof(unsigned short) << "bytes" << ", ";
    cout << "int = " << sizeof(int) << "bytes" << "\n";
    cout << "float = " << sizeof(float) << "bytes" << ", ";
    cout << "double = " << sizeof(double) << "bytes" << ", ";
    cout << "long = " << sizeof(long) << "bytes" << ", ";
    cout << "long long = " << sizeof(long long) << "bytes" << "\n";

    /* 연산자 우선 순위 & 결합성(방향) 확인 -> internet으로 */
    return 0;
}