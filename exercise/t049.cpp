#include <iostream>

using namespace std;

struct sungjuk { // 구조체
    int hakbun;
    char *irum;
    int kor, eng, mat, tot;
};

int main(void)
{
    double avg;
    struct sungjuk sung; // 구조체 변수 선언
    sung.hakbun = 30101;
    sung.irum = "hong gildong";
    sung.kor = 90; sung.eng = 80; sung.mat = 70;
    sung.tot = sung.kor + sung.eng + sung.mat;
    avg = sung.tot / 3.0;

    //struct sungjuk sung = {30101, "hong gildong", 90, 80, 70};

    cout << sung.hakbun << "\n";
    cout << sung.irum << "\n";
    cout << "국어, 영어, 수학 : " << sung.kor;
    cout << " " << sung.eng << " " << sung.mat << "\n";
    cout << "total : " << sung.tot << "\n";
    cout << "avg : " << avg << "\n";
}