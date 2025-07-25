#include <iostream>
#include "time2.h"

using namespace std;

const int MAX = 3;

int main(void)
{
    // 코드의 재활용 & 더 강력한 수정 -> 상속
    /* 상속
     * 1. 기존의 클래스에 새로운 기능을 추가할 수 있다.
     * 2. 클래스가 나타내고 있는 데이터에 다른 것을 더 추가할 수 있다.
     * 3. 클래스 매서드가 동작하는 방식을 변경할 수 있다.
    */

    // 1. 일반 상속 //
    /*
    void NewTime::print() {
        std::cout << this->day << "일 ";
        this->show();
    }
    NewTime temp(3, 30, 2);
    temp.print();
    */

    // 2. public 다형 상속 (가상 메소드를 활용하여) //
    Time temp1(30, 2);
    NewTime temp2(3, 30, 2);
    temp1.show();
    temp2.show();

    // 3. 동적 결합 //
    Time *times[MAX];
    int day;
    int hours;
    int mins;
    char check;

    for (int i = 0; i < MAX; i++) {
        cout << "\n" << i + 1 << "번째 원소\n";
        cout << "시간을 입력 : ";
        cin >> hours;
        cout << "분을 입력 : ";
        cin >> mins;
        cout << "일 정보가 있다면 1, 없다면 0을 입력 : ";
        cin >> check;
        if (check == '0')
            times[i] = new Time(hours, mins);
        else if (check == '1') {
            cout << "일을 입력 : ";
            cin >> day;
            times[i] = new NewTime(hours, mins, day);
        }
    }

    for (int i = 0; i < MAX; i++) {
        cout << i + 1 << "번째 : ";
        times[i]->show();
    }

    for (int i = 0; i < MAX; i++)
        delete times[i];
    // main함수에서 정의된 times 타입인 Time 객체에 대해서 소멸자가 호출된다.
    // 그래서 ~Time() 함수를 virtual로 설정해야 한다.
    // 설정했다면 저장된 객체 타입에 대해서 소멸자가 호출되기에 올바른 의도대로 동작한다.

    return 0;
}