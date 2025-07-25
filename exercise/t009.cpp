#include <iostream>

using namespace std;

int main(void)
{
    int a = 10, b = 3;
    cout << "a + b = " << a + b << ", ";    // 덧셈
    cout << "a - b = " << a - b << ", ";    // 뺄셈
    cout << "a * b = " << a * b << ", ";    // 곱셈
    cout << "a / b = " << a / b << ", ";    // 나눗셈
    cout << "a % b = " << a % b << ", ";    // 나머지
    cout << "-b = " << -b << endl;          // 부호 변환 (c와 차이점)

    int c, d;
    c = d = 5;
    cout << "a = " << a << ", b = " << b << ", ";
    cout << "c = " << c << ", d = " << d << "\n";

    a += 1;
    b /= 3;
    cout << "a += 1 => " << a << "\n";
    cout << "b /= 3 => " << b << "\n";

    return 0;
}