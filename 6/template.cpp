#include <iostream>
using namespace std;

// class 혹은 typeName
template <class Any>
Any sum(Any, Any);
template <class Any>
Any sum(int, Any); // 템플릿 변수 + 함수의 오버로딩

int main(void)
{
    // 함수의 템플릿 : 함수의 일반화??
    // 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의한다. (타입에 국한되지 않도록!)
    int a = 3;
    int b = 4;
    // cout << sum(a, b) << endl;
    // 하지만, 모든 경우를 포함할 수 없다! => 두 개의 sum 함수 중에 어떤 sum인지 컴파일러가 결정할 수 없음.

    float c = 3.14;
    float d = 1.592;
    cout << sum(c, d) << endl;

    cout << sum(a, c) << endl;
    // "인수 목록이 일치하는 함수 템플릿 \"sum\"의 인스턴스가 없습니다." => 오버로딩으로 해결

    return 0;
}

template <class Any>
Any sum(Any a, Any b) {
    return a + b;
}

template <class Any>
Any sum(int a, Any b) {
    return a + b;
}