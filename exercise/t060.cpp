#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>

using namespace std;

class sawon {
    private:
        char irum[14];
        char jumin[15];
        int age;
    public:
        void init(char *ir, char *ju, int ag);
        friend void print(class sawon p1); // 프랜드 함수 : 클래스의 public 함수가 아니면서 private 구성원에 접근할 때 사용
};
void sawon::init(char *ir, char *ju, int ag) {
    strcpy(this->irum, ir);
    strcpy(this->jumin, ju);
    this->age = ag;
}
int main(void)
{
    class sawon sa1, sa2;
    sa1.init("정다워", "860929-1401110", 17);
    sa2.init("한소라", "861220-2402222", 17);
    print(sa1);
    print(sa2);

    return 0;
}

void print(class sawon p1) {
    cout << "이름 : " << p1.irum << ", ";
    cout << "주민 등록 번호 : " << p1.jumin << ", ";
    cout << "나이 : " << p1.age << "\n";
}