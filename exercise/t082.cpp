#include <iostream>
#include <fstream>
#include <string.h>

class sung {
    private:
        int hakbun;
        char irum[16];
        int kor;
        int eng;
        int mat;
    public:
        sung() {hakbun = 0;}
        sung(int ha, char ir[], int ko, int en, int ma) {
            this->hakbun = ha;
            strcpy(this->irum, ir);
            this->kor = ko;
            this->eng = en;
            this->mat = ma;
        }
        ~sung() {};
};

class juk {
    sung parts[50]; // class의 기본 접근 지정자는 private이다.
    public:
        static int num;
        juk() {};
        void write(int, char [], int, int, int);
        void todisk(void);
};
void juk::write(int h, char p[], int k, int e, int m) {
    parts[num] = sung(h, p, k, e, m);
    num++;
}
void juk::todisk(void) {
    std::ofstream fd("file09.txt");
    fd.write((char *)this, sizeof(juk));
    // fd.write((char *)this, sizeof(*this));
}
int juk::num = 0; // class 내부에서는 초기화 방식이 허용되지 않는다.

int main(void)
{
    juk seoul;
    seoul.write(30101, "김소라", 88, 99, 77);
    seoul.write(30102, "한승혜", 78, 88, 79);
    seoul.write(30103, "김윤진", 98, 73, 83);
    seoul.write(30104, "이영숙", 79, 90, 82);
    seoul.todisk();

    return 0;
}