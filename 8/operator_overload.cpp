#include <iostream>
#include "time.h"
using namespace std;

int main(void)
{
    Time day1(1, 40);
    Time day2(2, 30);

    day1.show();
    day2.show();

    Time total;
    total = day1.operator+(day2);
    total.show();
    cout << "\n";

    Time total2;
    total2 = day1 + day2; // +가 operator+에 정의된 코드가 실행됨
    total2.show();
    return 0;
}