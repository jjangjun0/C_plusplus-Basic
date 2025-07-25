#include <iostream>

using namespace std;

int main(void)
{
    int condition = false;
    if (condition)
        cout << "조건이 참입니다.";
    else
        cout << "조건이 거짓입니다.";
    cout << "\n프로그램 종료" << endl;

    if (false) {
        cout << "#1";
    }
    else if (true) {
        cout << "#2";
    }
    else {
        cout << "#3";
    }
    cout << "\n프로그램 종료" << endl;

    // 논리합, 논리곱, 논리부정 연산자
    // || , && , !

    int age;
    cout << "나이를 입력하시오: ";
    cin >> age;

    if (age < 0 || age > 100) {
        cout << "다시 입력하시오";
    }
    else if (age >= 20 && age <= 29) {
        cout << "20대 입니다";
    }
    else if (age > 30) {
        cout << "청년입니다";
    }
    else {
        cout << "???";
    }
    cout << "\n";

    return 0;
}