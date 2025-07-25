#include <iostream>

using namespace std;

int abs(int x) {
    if (x < 0)
        x = -x;

    return x;
}

int main(void)
{
    int x, result;
    
    cout << "x = ";
    cin >> x;
    result = abs(x);
    cout << "ABS(" << result << ")" << "\n";

    return 0;
}