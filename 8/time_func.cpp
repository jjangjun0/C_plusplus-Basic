#include "time.h"

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
Time Time::operator+(Time &t) {
    Time sum;
    sum.mins = this->mins + t.mins;
    sum.hours = this->hours + t.hours;
    sum.hours += sum.mins / 60;
    sum.mins %= 60;
    return sum;
}
Time Time::operator*(int n) {
    Time result;
    long resultMin = this->hours * n * 60 + this->mins * n;
    result.hours = resultMin / 60;
    result.mins = resultMin % 60;
    return result;
}
void Time::show() {
    std::cout << "---------" << "\n";
    std::cout << this->hours << "시간 ";
    std::cout << this->mins  << "분" << "\n";
    std::cout << "---------" << std::endl;
}
Time::~Time() {}

// Time operator*(int n, Time &t) {
//     Time result;
//     long resultMin = t.hours * n * 60 + t.mins * n;
//     result.hours = resultMin / 60;
//     result.mins = resultMin % 60;
//     return result;
// }
std::ostream &operator<<(std::ostream & os, Time &t) {
    os << t.hours << "시간 " << t.mins << "분";
    return os; // << 좌항의 값으로 ostream의 객체롤 요구하기 때문에 리턴형이 os의 참조값이다.
}