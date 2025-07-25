#include <iostream>

using namespace std;

void helloCPP(int, int);

int main(void)
{
    int t1, t2;
    cout << "정수 입력: ";
    cin >> t1;
    cin.get();
    cout << "다시 정수 입력: ";
    cin >> t2;
    cin.get();
    helloCPP(t1, t2);

    return 0;
}
void helloCPP(int n, int m) {
    for (int i = 0; i < n; i++)
        cout << "Hello\n";
    for (int i = 0; i < m; i++)
        cout << "C++\n";
}