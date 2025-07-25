#include "time2.h"

Time::Time() {
    hours = mins = 0;
}
Time::Time(int hours, int mins) {
    this->hours = hours;
    this->mins = mins;
}

void Time::addHours(int hours) {
    this->hours += hours;
}
void Time::addMins(int mins) {
    this->mins += mins;
    this->hours += this->mins / 60;
    this->mins %= 60;
}
void Time::show() {
    std::cout << this->hours << "시간 ";
    std::cout << this->mins  << "분" << "\n";
}
Time::~Time() {}

// 멤버 초기화 리스트 방식 //
NewTime::NewTime() : Time(){
    this->day = 0;
}
NewTime::NewTime(int h, int m, int d) : Time(h,m) {
    this->day = d;
}

void NewTime::show() {
    std::cout << this->day << "일 ";
    //std::cout << this->hours << "시간 ";
    //std::cout << this->mins  << "분" << "\n";
    std::cout << getHours() << "시간 ";
    std::cout << getMins()  << "분" << "\n";
}