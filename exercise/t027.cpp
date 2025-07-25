#include <iostream>

using namespace std;

const int M = 5;

int main(void)
{
    static int a[M];
    for (int i = 0; i < M; i++) {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }
    cout << "\n";

    for (int i = 0; i < M; i++)
        cout << "a[" << i << "] : " << a[i] << "\n";

    return 0;
}