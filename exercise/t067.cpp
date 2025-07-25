#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

class student {
    private:
        int hakbun;
        char irum[18];
        int nai;
    public:
        student(int, char *, int);
        ~student(void);
        void print_student(void);
};

student::student(int hakbun, char *irum, int nai) {
    this->hakbun = hakbun;
    strcpy(this->irum, irum);
    this->nai = nai;
}
student::~student(void) {
    cout << "student 객체가 소멸되었습니다.\n";
}
void student::print_student(void) {
    cout << "학번 : " << this->hakbun << "\n";
    cout << "이름 : " << this->irum << "\n";
    cout << "나이 : " << this->nai << "\n";
}

int main(void)
{
    student su11(30101, "김성수", 18);
    su11.print_student();

    return 0;
}