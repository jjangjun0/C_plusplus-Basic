#include <iostream>

using namespace std;

void power(register int x, register int n);
double p; // 전역 변수 선언

int main(void)
{
    int x, n;

    cout << "x, n = ";
    cin >> x >> n;

    p = 1.0;
    power(x, n);
    return 0;
}

void power(register int x, register int n) {
    register int i;

    for (i = 1; i <= n; i++)
        p *= x;
    
    cout << x << " " << n << " = " << p << "\n";
}