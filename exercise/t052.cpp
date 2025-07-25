#include <iostream>
#include <conio.h>

using namespace std;

class sungjuk { // class (객체, 클래스 및 상속을 구현하기 위함이다.)
    public:
        int hakbun;
        char *irum;
        int kor;
        int eng;
        int mat;
        void prin() {
            std::cout << "hakbun : " <<hakbun<< "\n";
            std::cout << "irum : " <<irum<< "\n";
            std::cout << "kor : " <<kor<< ", eng : " <<eng<< ", mat : " <<mat<< "\n";
            std::cout << "tot : " <<kor+eng+mat<< "\n";
            std::cout << "avg : " <<(kor+eng+mat)/3.0<< "\n";
        };
};

int main(void)
{
    // 멤버, 메소드 / 메시지 : 객체에게 해당 메서드를 실행시키라는 신호
    class sungjuk sung, juk; // 클래스 변수 선언
    sung.hakbun = 30101; sung.irum = "김소라";
    sung.kor = 90; sung.eng = 89; sung.mat = 99;
    sung.prin();
    cout << "\n";

    juk.hakbun = 30102; juk.irum = "한희선";
    juk.kor = 89; juk.eng = 96; juk.mat = 91;
    juk.prin();
    return 0;
}