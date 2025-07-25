#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main(void)
{
    /*
    '\a', '\n', '\t', '\b', '\r', '\f', '\\', '\'', '\"', '\0'
    */
    int a = 3, b = 7;

    cout << "\a"; // 경고음 소리 발생
    cout << "a\t\tb\n";
    cout << a << "\t\t" << b << "\n";
    cout << "C:\\TC>\n";
    cout << "----- ----- ----- -----\n";

    cout << '\\' << "\n";
    cout << '\'' << "\n";
    cout << '\"' << "\n";
    
    return 0;
}