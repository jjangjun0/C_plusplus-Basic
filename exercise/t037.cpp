#include <iostream>
#include <iomanip>

using namespace std;

#define ROW 3
#define COL 4

int main(void)
{
    int a[][COL] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int i, j, sum = 0, *p;
    //p = a; // a는 int (*)[4] 타입
    //p = a[0]; // a[0]은 int * 타입
    // p = a[0][0]; // a[0][0]은 int 타입
    p = &a[0][0]; // &a[0][0]은 int * 타입

    for (i = 0; i < ROW*COL; i++) {
        cout << "*p = " << setw(2) << *(p++) << "\n";
    }

    p = a[0];
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
            sum += *(p++);
    cout << "sum = " << sum << "\n";

    return 0;
}