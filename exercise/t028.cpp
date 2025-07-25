#include <iostream>
#include <iomanip>

using namespace std;

#define M 10

int main(void)
{
    static int a[M] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int i, sum = 0;
    for (i = 0; i < M; i++)
        sum += a[i];
    cout << "sum = " << sum << "\n";
    cout << "----- ----- ----- ----- ----- \n";

    int b[5] = { 43, 57, 23, 87, 95 };
    for (i = 4; i >= 0; i--)
        cout << setw(3) << b[i];
    cout << "\n----- ----- ----- ----- ----- \n";
    
    static char c[M] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
    for (i = 0; c[i] != '\0'; i++)
        cout << "c[" << i << "] : " << c[i] << "\n";
    return 0;
}