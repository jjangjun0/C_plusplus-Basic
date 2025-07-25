#include <iostream>
#include <string.h>

using namespace std;

class student {
    private:
        int hakbun;
        char irum[18];
        int nai;
    public:
        student(); // 생산자 오버로드
        student(int, char *);
        student(int, char *, int);
        void print_student(void);
};

student::student(int hakbun, char *irum) {
    this->hakbun = hakbun;
    strcpy(this->irum, irum);
    do {
        cout << irum << "의 나이 : ";
        cin >> nai;
    } while (nai < 0 || nai > 200);
}
student::student(int hakbun, char *irum, int nai) {
    this->hakbun = hakbun;
    strcpy(this->irum, irum);
    this->nai = nai;
}
void student::print_student(void) {
    cout << "학번 : " << this->hakbun << "\n";
    cout << "이름 : " << this->irum << "\n";
    cout << "나이 : " << this->nai << "\n";
}

int main(void)
{
    student su11(30101, "김성수", 18);
    student su33(30102, "한성숙");

    su11.print_student();
    cout << "\n";
    su33.print_student();

    return 0;
}