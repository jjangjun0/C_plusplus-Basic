#include <iostream>

using namespace std;

enum day {sun, mon, tue, wed, thr, fri, sat}; // 열거형

int main(void)
{
    enum day d1, d2;
    d1 = mon;
    d2 = sat;
    cout << "mon = " << d1 << "\n";
    cout << "sat = " << d2 << "\n";
    return 0;
}