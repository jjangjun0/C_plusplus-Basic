#include <iostream>

using namespace std;

class sungjuk {
    private:
        int hakbun;
        char *irum;
        int kor;
        int eng;
        int mat;
        int tot;
        float avg;
    public:
        void init(int hakbun, char *irum, int kor, int eng, int mat);
        void tot_avg(void);
        void prin(void);
};

void sungjuk::init(int hakbun, char *irum, int kor, int eng, int mat) {
    this->hakbun = hakbun;
    this->irum = irum;
    this->kor = kor;
    this->eng = eng;
    this->mat = mat;
};
void sungjuk::tot_avg(void) {
    tot = kor + eng + mat;
    avg = tot / 3.0;
};
void sungjuk::prin(void) {
    std::cout << "hakbun : " <<hakbun<< "\n";
    std::cout << "irum : " <<irum<< "\n";
    std::cout << "kor : " <<kor<< ", eng : " <<eng<< ", mat : " <<mat<< "\n";
    std::cout << "tot : " <<kor+eng+mat<< "\n";
    std::cout << "avg : " <<(kor+eng+mat)/3.0<< "\n";
}

int main(void)
{
    class sungjuk sung;
    sung.init(30101, "김경란", 89, 79, 98); // 데이터 초기화
    sung.tot_avg();
    sung.prin();

    return 0;
}