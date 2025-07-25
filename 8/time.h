#include <iostream>
#ifndef TIME_H
#define TIME_H

class Time
{
private:
    int hours;
    int mins;

public:
    Time();
    Time(int, int);
    void addHours(int);
    void addMins(int);
    Time operator+(Time &);
    Time operator*(int); // 동작 2
    void show();
    ~Time();

    // friend Time operator*(int, Time &); // friend가 붙으면 멤버함수가 아니지만 동등한 접근 권한을 갖는다.
    friend Time operator*(int n, Time &t) {
        return t * n; // 동작 1
    }
    friend std::ostream &operator<<(std::ostream &, Time &);
};

#endif // !TIME_H