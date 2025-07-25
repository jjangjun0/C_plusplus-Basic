#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
const int LAST = 345;

int main(void)
{
    cout << LAST << "\n";

    char a, b;
    cout << "a, b = ? ";
    cin >> a >> b; // 키보드로 사용자 입력을 받는다.
    cout << "a = " << a << " b = " << b << endl;
    cout << "a의 ASCII 값은 " << dec << (int)a << "이다.\n";
    cout << "b의 ASCII 값은 " << dec << (int)b << "이다.\n";

    getch();
    cout << "\n";
    float c, d;
    cout << "c, d = ? ";
    cin >> c >> d;
    cout << "c = " << fixed << setprecision(1) << c << "\n";
    cout << "d = " << fixed << setprecision(1) << d << "\n";
    return 0;
}