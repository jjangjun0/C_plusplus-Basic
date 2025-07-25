#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(void)
{
    int i;

    srand(time(NULL)); // SEED 초기화
    for (i = 1; i < 6; i++) {
        cout << i << "==> " << rand() % 100 + 1 << "\n";
    }

    int ia;
    long lint;
    double dflo;

    ia = atoi("12005");
    lint = atol("98765");
    dflo = atof("123456.78");

    cout << ia << "\n";
    cout << lint << "\n";
    cout << fixed << dflo << "\n";
    return 0;
}