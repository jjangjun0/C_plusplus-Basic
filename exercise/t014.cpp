#include <iostream>
#include <iomanip> // setprecision(), setw()


using namespace std;

int main(void)
{
    int a;
    for (a = 10; a > 0; a--)
        cout << a << " ";
    cout << "\n";

    int sum = 0;
    for (a = 1; a <= 100; a++)
        sum += a;
    cout << "1 ~ 100까지의 합은 " << sum << "입니다.\n";

    int b;
    cout << "구구단 몇 단을 출력하시겠습니까? : ";
    cin >> b;
    for (int i = 1; i < 10; i++) {
        cout << b << " * " << i << " = " << b*i << "\n";
    }
    cout << "\n";

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "#";
        }
        cout << "\n";
    }

    cout << "----- ----- ----- ----- -----\n";
    cout << "    <<<   구구단 표   >>>    \n";
    cout << "----- ----- ----- ----- -----\n";
    for (int i = 2; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cout << setw(3) << i * j;
        }
        cout << "\n";
    }
    cout << "----- ----- ----- ----- -----\n";

    for (int i = 1; i <= 20; i++) {
        if (!(i % 3)) {
            cout << " X";
            continue;
        }
        cout << " " << i;
    }
    cout << "\n";

    return 0;
}