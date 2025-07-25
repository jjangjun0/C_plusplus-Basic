#include <iostream>
#include "time.h"

using namespace std;

int main(void)
{
    // '<<' (스트림 추출 연산자) 오버로딩
    int x = 5;
    int y = 8;
    (cout << x) << y;

    Time t1(3, 45);
    cout << "t.show() 결과\n";
    t1.show();
    cout << "\n<< 오버로딩의 결과\n";
    cout << t1;
    return 0;
}