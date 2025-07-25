#include <iostream>
#include <conio.h>

using namespace std;

/* 서로 다른 클래스에서 동일한 이름의 함수를 사용할 수 없기에 글로벌 연산자(::)를 사용한다. */
class sungjuk { // class (객체, 클래스 및 상속을 구현하기 위함이다.)
    public:
        int hakbun;
        char *irum;
        int kor;
        int eng;
        int mat;
        void prin(void);
};

void sungjuk::prin() {
    std::cout << "hakbun : " <<hakbun<< "\n";
    std::cout << "irum : " <<irum<< "\n";
    std::cout << "kor : " <<kor<< ", eng : " <<eng<< ", mat : " <<mat<< "\n";
    std::cout << "tot : " <<kor+eng+mat<< "\n";
    std::cout << "avg : " <<(kor+eng+mat)/3.0<< "\n";
};

int main(void)
{
    class sungjuk sung, juk;
    sung.hakbun = 30101; sung.irum = "김소라";
    sung.kor = 90; sung.eng = 89; sung.mat = 99;
    sung.prin();
    cout << "\n";

    juk.hakbun = 30102; juk.irum = "한희선";
    juk.kor = 89; juk.eng = 96; juk.mat = 91;
    juk.prin();

    return 0;
}