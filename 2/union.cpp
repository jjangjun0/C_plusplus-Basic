#include <iostream>

using namespace std;

int main(void)
{
    // 공용체 (union)
    // 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있다.

    union MyUnion {
        int intVal;
        long longVal;
        float floatVal;
    };

    MyUnion test;
    test.intVal = 3;
    cout << test.intVal << endl;

    test.longVal = 333;
    cout << test.intVal << " " << test.longVal << endl;
    test.floatVal = 3.3;
    cout << test.intVal << " " << test.longVal << " " << test.floatVal << endl;

    // 즉, 동시에 저장할 수 없다.(메모리 절약 가능) -> 운영체제, 하드웨어 데이터 구조에서 활용

    // 열거체 (enum)
    // 기호 상수를 만드는 것에 대한 또다른 방법.
    // enum spectrum {
    //     red, orange, yellow, green, blue, violet, indigo, ultraviolet
    // };
    // // 1. spectrun을 새로운 데이터형 이름으로 만든다.
    // // 2. red, orange, yellow... 은 0에서 7까지 정수 값을 각각 나타내는 기호 상수로 만든다.

    // spectrum a = orange;
    // cout << a << endl;

    // int b;
    // b = blue;
    // cout << b << "\n";
    // b = blue + 3;
    // cout << b << "\n";

    enum spectrum {
        red = 0,
        orange = 2,
        yellow = 4,
        green,      // 5
        blue,       // 6
        violet,     // 7
        indigo,     // 8
        ultraviolet // 9
    };
    spectrum c = indigo;
    cout << c << endl;
    return 0;
}