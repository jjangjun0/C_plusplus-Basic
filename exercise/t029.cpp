#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
    char c[255];
    int i = -1;

    cout << "Input String : ";
    gets(c);

    while (c[++i] != '\0');

    cout << "String Length = " << i << "\n";

    return 0;
}