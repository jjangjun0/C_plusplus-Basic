#include <iostream>
using namespace std;

long fact(int f);

int main(void)
{
    int x;
    long res;

    cout << "x = ";
    cin >> x;
    
    res = fact(x);
    cout << x << "! = " << res << "\n";
    return 0;
}

long fact(int f) {
    if (f < 0) {
        std::cerr << f << " is not a positive number!" << std::endl;
        exit(1);
    }

    if (f <= 1)
        return 1;
    else
        return f * fact(f - 1); // 재귀 호출 (Recursive call)
}