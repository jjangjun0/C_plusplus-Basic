#include <iostream>

using namespace std;

//float large(float, float);
//int large(int, int);
// 함수가 선언되어 있으면 링커가 선언된 함수가 있으니 템플릿 버전은 사용하지 않는다.
// 근데 이 코드의 경우는 함수가 정의되어 있지 않기에 링커 에러가 발생하는 것이다. // undefined reference error
// 템플릿 함수가 사용되는 순간 실제 타입에 맞춰 복사본이 자동으로 만들어지는 것을 인스턴스화(instantiation)라고 한다.

// C++은 다음 순서로 함수를 선택합니다:
// 1. 정확히 일치하는 일반 함수가 있으면 그것을 사용
// 2. 없으면 템플릿 함수 중 타입을 맞춰서 인스턴스화

template <class ABC> ABC large(ABC p, ABC q) { // 템플릿 함수
    if (p > q)
        return p;
    else
        return q;
}

int main(void)
{
    int a = 33, b = 77;
    cout << a << "와 " << b << " 중에서 더 큰 값은 " << large(a, b) << "이다.\n"; // large<int>(int, int) 자동 생성됨
    float c = 5.457, d = 7.567;
    cout << c << "와 " << d << " 중에서 더 큰 값은 " << large(c, d) << "이다.\n"; // large<float>(float, float) 자동 생성됨

    return 0;
}