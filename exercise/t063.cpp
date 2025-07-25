#include <iostream>
#include <iomanip>

using namespace std;

class student {
    private:
        int num;
        char *name;
        int kor;
        int eng;
    public:
        void init(int num, char *name, int kor, int eng);
        friend void print(class student s1); // friend 함수가 없으면 print()함수를 따로 만들어서 객체에서 public 함수를 호출해야함.
};

void student::init(int num, char *name, int kor, int eng) {
    this->num = num;
    this->name = name;
    this->kor = kor;
    this->eng = eng;
}
void print(class student s1) {
    cout << "학번 : " << s1.num << ", 이름 : " << s1.name << "\n";
    cout << "국어 : " << s1.kor << ", ";
    cout << "영어 : " << s1.eng << "\n";
    cout << "총점 : " << s1.kor+s1.eng << ", ";
    cout << "평균 : " << fixed << setprecision(2) << (s1.kor+s1.eng) / 2.0 << "\n";
}

int main(void)
{
    class student s1, s2;
    s1.init(20101, "한길수", 80, 90);
    s2.init(20102, "정성식", 100, 95);

    print(s1);
    cout << "\n";
    print(s2);

    return 0;
}