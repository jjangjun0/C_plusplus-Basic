#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    float a, b, hab;
    float *i, *j; // 포인터 변수

    i = &a; j = &b;

    *i = 7.2; *j = 3.3;

    hab = *i + *j;
    cout << "hab = " << fixed << setprecision(1) << hab << "\n";
    return 0;
}