#include <iostream>

using namespace std;

int main(void)
{
    int a;

    cout << "  정수1 입력 : ";
    cin >> a;

    if (a > 0)
        cout << a << "는 양수이다.\n";
    if (a < 0)
        cout << a << "는 음수이다.\n";
    if (!a) // if (a == 0)
        cout << a << "는 0이다.\n";
    
    int b;
    cout << "  정수2 입력 : ";
    cin >> b;

    if (b > 10)
        cout << b << " > 10\n";
    else
        cout << b << " <= 10\n";

    int c;
    cout << "  정수3 입력 : ";
    cin >> c;
    
    if (!(c % 3)) // if (c % 3 == 0)
        cout << c << "는 3의 배수다.\n";
    else
        cout << c << "는 3의 배수가 아니다.\n";
    
    int d;
    cout << "  정수4 입력 : ";
    cin >> d;

    (d > 10) ? cout << "d > 10\n" : cout << "d <= 10\n";

    int e;
    cout << "  정수5 입력 : ";
    cin >> e;
    
    switch (e) {
        case 1:
            cout << "지금 입력한 값은 " << e << "이다.\n";
            break;
        case 2:
            cout << "지금 입력한 값은 " << e << "이다.\n";
            break;
        case 3:
            cout << "지금 입력한 값은 " << e << "이다.\n";
            break;
        default:
            cout << "default:\n";
            cout << "지금 입력한 값은 " << e << "이다.\n";
    }

    cout << "  goto 예문:\n";
    int f = 0;

    dasi:   // 레이블명
    f += 1; // f의 값을 1씩 증가
    cout << " " << f; // f값 출력
    if (f < 5)
        goto dasi; // 레이블 dasi로 분기
    
    return 0;
}