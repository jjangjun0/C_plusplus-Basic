#include <iostream>

using namespace std;

#define M 5

void input(int a[]);
void output(int a[]);

int main(void)
{
    int a[M];

    input(a);
    cout << "\n";
    output(a);
    return 0;
}

void input(int a[]) {
    int i;
    for (i = 0; i < M; i++) {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }
}
void output(int a[]) {
    int i;
    for (i = 0; i < M; i++)
        cout << "a[" << i << "] : " << a[i] << "\n";
}