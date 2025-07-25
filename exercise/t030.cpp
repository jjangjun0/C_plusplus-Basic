#include <iostream>
#include <iomanip>

using namespace std;

#define R 2
#define C 3

int main(void)
{
    int column, row;
    column = 2; row = 3;

    int a[column][row] = {
        {70, 33, 26},
        {15, 33, 88}
    };
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cout << setw(3) << a[i][j];
        }
        cout << "\n";
    }
    cout << "\n";

    static int b[R][C] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int sum = 0;
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            sum += b[i][j];
    cout << "sum = " << sum << "\n";
    return 0;
}