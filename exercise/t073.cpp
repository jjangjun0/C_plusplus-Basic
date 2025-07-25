#include <iostream>
#include <string.h>

using namespace std;

class haksa {
    private:
        int hakbun;
        char irum[12];
        float weight;
    public:
        haksa(int, char *, float);
        void show_haksa(void);
        char *get_irum(void);
};
haksa::haksa(int hakbun, char *irum, float weight) {
    this->hakbun = hakbun;
    strcpy(this->irum, irum);
    this->weight = weight;
}
void haksa::show_haksa(void) {
    cout << "학번 : " << hakbun << ", ";
    cout << "이름 : " << irum << ", ";
    cout << "몸무게 : " << weight << "\n";
}
char *haksa::get_irum(void) {
    return this->irum;
}

class student : public haksa {      // (자식 클래스:부모 클래스)
    private:
        char sex[3];
        float length;
    public:
        student(int, char *, char *, float, float);
        void show_student(void);
};
student::student(int hakbun, char *irum, char *sex, float weight, float length):haksa(hakbun, irum, weight) {
    strcpy(this->sex, sex);
    this->length = length;
}
void student::show_student(void) {
    this->show_haksa();
    cout << "  " << this->get_irum() << "'s ";
    cout << "sex : " << sex << ", ";
    cout << "length : " << length << "\n";
}

int main(void)
{
    haksa seng(10101, "김소라", 44.5);
    student lear(10202, "한희정", "여", 39.5, 177.3);
    seng.show_haksa();
    lear.show_student();
    return 0;
}