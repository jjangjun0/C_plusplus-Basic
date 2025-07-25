#include <iostream>
#include <climits>

using namespace std;

int main(void)
{
    /* 1. 변수: 선언과 대입, 초기화 */
    // (1) 숫자로 시작할 수 없다.
    // (2) c++에서 사용하고 있는 키워드는 사용할 수 없다.
    // (3) white space(' ', '\n')를 사용할 수 없다.

    int a;
    a = 7;
    int b = 3;

    cout << "a= " << a << ", b= " << b << endl;
    cout << "a's address= " << &a << ", b's address= " << &b << endl;

    cout << endl;
    /* 2. 정수형, 실수형 자료형 */
    short n_short = SHRT_MAX;
    int n_int = INT_MAX;
    int n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "short는 " << sizeof n_short << " bytes." << endl;
    cout << "int는 " << sizeof n_int << " bytes." << endl;
    cout << "long은 " << sizeof n_long << " bytes." << endl;
    cout << "long long은 " << sizeof n_llong << " bytes." << endl;
    cout << endl;
    cout << "short의 최대값은 " << n_short << endl;
    cout << "int의 최대값은 " << n_int << endl;
    cout << "long의 최대값은 " << n_long << endl;
    cout << "long long의 최대값은 " << n_llong << endl;

    unsigned short v1;
    unsigned int v2;
    unsigned long v3;
    unsigned long long v4;

    v1 = -1;
    cout << v1 << endl;

    float x = 3.14;
    int y = 3.14;

    cout << a << " " << b << endl;

    cout << endl;
    /* 3. 문자형, bool형 자료형 */
    // char : 문자형 (문자는 정수로 저장된다.)
    int x1 = 97; // 65: 'A', 97: 'a'
    char x2 = x1;
    cout << x2 << endl;
    x2 = 'a';
    cout << x2 << endl;

    // string
    char x3[] = { 'a', 'b', 'c' };
    cout << x3 << endl;
    char x4[] = { 'a', 'b', 'c', '\0' };
    cout << x4 << endl;

    // bool : 1(true) or 0(false)
    bool x5 = 0;
    bool x6 = 1;
    bool x7 = 10; // 0 이외의 값들은 1로 저장

    cout << x5 << " " << x6 << " " << x7 << endl;
    return 0;
}