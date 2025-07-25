#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int n, count = 1;
    cout << "정수 입력(1 ~ 9) : ";
    cin >> n;
    if (n < 1 || n > 9) {
        std::cerr << n << " is not between 1 and 9" << std::endl;
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(3) << count++;
        }
        cout << "\n";
    }

    return 0;
}