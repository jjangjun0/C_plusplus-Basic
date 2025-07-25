#include <iostream>

using namespace std;

int main(void)
{
    // static char *a[] = {"one", "two", "three"};
    // warning: ISO C++ forbids converting a string constant to 'char*
    // 이 경고 메시지는 C++에서 문자열 상수(string literal)를 char* 타입으로 변환하는 것이 금지되었다는 것을 알려줍니다.
    // C++ 표준은 문자열 상수를 const char[] 또는 const char* 타입으로 취급하기 때문에, 이를 char*에 할당하면 정의에 맞지 않게 됩니다.

    // 여기서 "one" 같은 문자열 상수는 변경 불가능한 메모리에 저장되기 때문에,
    // char*로 선언하면 마치 수정 가능한 메모리에 있는 것처럼 보입니다. 그래서 경고가 발생하는 겁니다.
    static const char *a[] = {"one", "two", "three"};
    for (int i = 0; i < 3; i++)
        cout << *(a + i) << "\n";

    return 0;
}