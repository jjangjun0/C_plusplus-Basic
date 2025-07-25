#include <iostream>

using namespace std;

int add_value(int, int);
int add_value(int, int, int);

int main(void)
{
    int a, b, c;
    a = 10; b = 20; c = 30;
    cout << "a + b = " << add_value(a, b) << "\n";
    cout << "a + b + c = " << add_value(a, b, c) << "\n";
    return 0;
}

int add_value(int a, int b) {
    return a + b;
}
int add_value(int a, int b, int c) {
    return a + b + c;
}