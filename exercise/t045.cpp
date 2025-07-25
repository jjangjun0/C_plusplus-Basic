#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void)
{
    double a, d = 30.0;
    a = d * 3.141592/180;

    cout << "sin(" << fixed << setprecision(0) << d << ") = ";
    cout << fixed << setprecision(6) << sin(a) << "\n";

    cout << "cos(" << fixed << setprecision(0) << d << ") = ";
    cout << fixed << setprecision(6) << cos(a) << "\n";

    cout << "tan(" << fixed << setprecision(0) << d << ") = ";
    cout << fixed << setprecision(6) << tan(a) << "\n";

    double d1, d2;
    d1 = 2.0; d2 = 3.0;
    cout << fixed << setprecision(0) << d1 << "를 " << setprecision(0) << d2;
    cout << "으로 거듭제곱한 값은 " << pow(d1, d2) << "이다.\n";
    return 0;
}