#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(void)
{
    int a;
    long b;
    double c;
    a = -355;
    b = -54367;
    c = -123456.567;

    std::ofstream fd("output.txt");

    fd << a << "의 절대값은 " << abs(a) << "이다.\n";
    fd << b << "의 절대값은 " << abs(b) << "이다.\n";
    fd << fixed << setprecision(3) << c << "의 절대값은 " << abs(c) << "이다.\n";

    fd.close();
    return 0;
}