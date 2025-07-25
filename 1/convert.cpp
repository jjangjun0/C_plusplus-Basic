#include <iostream>

#define PI 3.14

using namespace std;

int main(void)
{
    /* const 제한자와 데이터 형변환 */

    int r = 3;
    // float s = r * r * 3.14;
    float s = r * r * PI;
    // 상수 //
    // 1. 바뀔 필요가 없는 수
    // 2. 바뀌어서는 안되는 수
    cout << s << endl;

    const float PI2 = 3.1415926535; // const는 초기화를 통해 정의한다.
    float s2 = r * r * PI2;

    cout << s2 << endl;

    // 데이터 형변환 //
    // 1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
    // 2. 수식에 데이터형을 혼합하여 사용했을 때
    // 3. 함수에 매개변수를 전달할 때

    int a = 3.141592; // 자동 형변환
    cout << a << endl;

    // typeName(a) | (typeName)a | static_cast<typeName>
    char ch = 'A';
    cout << (int)ch << endl;
    cout << static_cast<int>(ch) << endl;

    return 0;
}