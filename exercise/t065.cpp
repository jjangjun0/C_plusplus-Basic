#include <iostream>
#include <string.h>

using namespace std;

class student {
    private:
        int hakbun;
        char irum[18];
        int nai;
    public:
        student(int, char *, int);
        void print_student(void);
};
student::student(int hakbun, char *irum, int nai) {
    // student::hakbun = hakbun; // hakbun이 정적 멤버가 아니라면 오류다.
    this->hakbun = hakbun; // instance 멤버인 경우 사용. (일반적)
    this->hakbun = hakbun;
    strcpy(this->irum, irum);
    if (nai > 0 && nai <= 200)
        this->nai = nai;
    else
        this->nai = 0;
}
void student::print_student(void) {
    cout << "학번 : " << this->hakbun << "\n";
    cout << "이름 : " << this->irum << "\n";
    cout << "나이 : " << this->nai << "\n";
}

int main(void)
{
    student sull(30101, "김성수", 18);
    sull.print_student();

    return 0;
}