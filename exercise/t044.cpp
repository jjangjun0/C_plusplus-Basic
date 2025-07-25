#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void)
{
    int a;
    long b;
    double c;
    a = -355;
    b = -54367;
    c = -123456.567;

    cout << a << "의 절대값은 " << abs(a) << "이다.\n";
    cout << b << "의 절대값은 " << abs(b) << "이다.\n";
    cout << fixed << setprecision(3) << c << "의 절대값은 " << fabs(c) << "이다.\n";

    double d = 16.0;
    cout << fixed << setprecision(0) << d << "의 제곱근은 ";
    cout << fixed << setprecision(0) << sqrt(d) << "이다.\n";

    double e = 16.5;
    cout << fixed << setprecision(1) << e << "의 소수 이하를 반올림하면 ";
    cout << ceil(e) << "이다.\n";
    cout << fixed << setprecision(1) << e << "의 소수 이하를 버림하면 ";
    cout << floor(e) << "이다.\n";
    return 0;
}