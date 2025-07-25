#include <iostream>

using namespace std;

#define N 10

void sub(const char *x);

int main(void)
{
    static const char *str = "0123456789";
    int n;

    for (n = N-1; n >= 0; n--)
        sub(&str[n]);

    return 0;
}

void sub(const char *x) {
    int p = 0;
    while (*(x + p) != '\0') {
        cout << *(x + p);
        p++;
    }
    cout << "\n";
}