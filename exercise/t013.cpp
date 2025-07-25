#include <iostream>

using namespace std;

int main(void)
{
    int a = 0;
    while (a < 10) {
        a++;
        cout << " " << a;
    }
    cout << "\n";

    a = 0;
    while (a < 100) {
        a++;
        if (a % 2)
            cout << " " << a;
    }
    cout << "\n";

    a = 0;
    do {
        a += 2;
        cout << " " << a;
    } while (a < 100);
    cout << "\n";

    a = 0;
    do {
        a += 1;
        if (!(a % 3))
            cout << " " << a;
    } while (a < 100);
    cout << "\n";
    return 0;
}