#include <iostream>
#include <iomanip> // "input/output manipulators" 입출력 조직자

using namespace std;

int main(void)
{
    int a = 211;
    cout << "10진수 : " << setbase(10) << a << "\n"; // 10진수로
    cout << "16진수 : " << setbase(16) << a << "\n"; // 16진수로
    cout << " 8진수 : " << setbase(8) << a << "\n";  // 8진수로
    cout << "10진수 : " << dec << a << "\n";
    cout << "16진수 : " << hex << a << "\n";
    cout << " 8진수 : " << oct << a << "\n";
    cout << "----- ----- ----- -----\n";
    //cout << setiosflags(ios::showbase);
    //cout << "16진수 : " << setiosflags(ios::hex) << 10 << "\n";
    //cout << " 8진수 : " << setiosflags(ios::oct) << 10 << "\n";
    //cout << "10진수 : " << setiosflags(ios::dec) << 10 << "\n"; // 동작 안함. 위와 같이 할 것
    cout << setiosflags(ios::dec); // 다시 10진수로

    int b = 57, c = -89;
    cout << setiosflags(ios::showpos); // + 부호 올림
    cout << b << "\t" << c << "\n";
    float d = 8.7;
    cout << setprecision(2) << d * (-1) << "\n";
    cout << fixed << setprecision(2) << setiosflags(ios::showpoint) << d << endl; // 고정된 소수점 자리수 출력 : fixed

    return 0;
}