#include <iostream>
#include <conio.h> // clrscr(), getch()를 사용하기 위한 헤더 파일
#include <cstdlib> // system 함수 사용

using namespace std;

int main(void) {
    // clrscr(); // 화면 지우기 -> 왜인지 안 먹힘
    system("cls");     // Windows용 콘솔 클리어
    char a, b;
    a = 'E'; b = 'T';
    cout << "a=" << a << " b=" << b << "\n";
    int a1 = 65;
    char a2 = 'A';
    cout << "a1= ";
    cout.put(a1);
    cout << " a2= ";
    cout.put(a2);
    getch();

    return 0;
}