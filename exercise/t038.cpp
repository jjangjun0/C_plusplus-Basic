#include <iostream>
#include <iomanip>

using namespace std;

void process(char a[]);

int main(void)
{
    char a[] = "ABC";

    process(a); // process(&a[0])
    cout << a << "\n";

    return 0;
}

void process(char a[]) {
    int i = 0;
    for (i = 0; a[i] != '\0'; i++)
        a[i] += 1;
}