#include <iostream>
#include <iomanip>

#define LAST 10
#define MESSAGE cout << "\n1부터 10까지의 정수 출력\n"
#define PRINT cout << setw(3) << i

#define SQUARE(x) ((x) * (x))
#define SQUARE2(x, y) ((x) * (y))

using namespace std;

int main(void)
{
    int i, sum = 0;
    MESSAGE;
    for (i = 1; i <= LAST; i++)
        PRINT;
    cout << "\n";

    int y, z;
    y = SQUARE(2);
    z = SQUARE2(2, 4);

    cout << "y = " << y << ", ";
    cout << "z = " << z << "\n";

    return 0;
}