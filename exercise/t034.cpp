#include <iostream>

using namespace std;

int main(void)
{
    // static char a[8] = "garbage";
    // static char a[] = "garbage";
    // static char *a = "garbage";

    static char a[] = "garbage";
    int i = 0;

    while (a[i] != '\0') {
        cout << "a[" << i << "] : " << a[i++] << "\n";
    }
    cout << "\n";

    i = 0;
    while (*(a + i) != '\0')
        cout << "(*a + " << i << ") -> " << *(a + i++) << "\n";
    cout << "\n";

    return 0;
}