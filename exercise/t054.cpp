#include <iostream>

using namespace std;

class sungjuk {
    private: // 클래스 밖에서 사용할 수 없다. (데이터 은닉 효과)
        int hakbun;
        char *irum;
        int kor;
        int eng;
        int mat;
        int tot;
        float avg;
    public: // public 조건을 만족하는 영역에서 접근 가능
        void init(void);
        void tot_avg(void);
        void prin(void);
};

inline void sungjuk::init(void) {
    hakbun = 30301;
    irum = "한송이";
    kor = 97;
    eng = 89;
    mat = 97;
};
inline void sungjuk::tot_avg(void) {
    tot = kor + eng + mat;
    avg = tot / 3.0;
};
inline void sungjuk::prin(void) {
    std::cout << "hakbun : " <<hakbun<< "\n";
    std::cout << "irum : " <<irum<< "\n";
    std::cout << "kor : " <<kor<< ", eng : " <<eng<< ", mat : " <<mat<< "\n";
    std::cout << "tot : " <<kor+eng+mat<< "\n";
    std::cout << "avg : " <<(kor+eng+mat)/3.0<< "\n";
}

int main(void)
{
    // inline 예약어를 추가한 이유는 함수 코드 자체로 확장되는 것이라고 컴파일러에게 암시한다.
    // 이를 통해 클래스 구성원 함수 실행을 보다 효율적으로 하기 위함이다.
    class sungjuk sung;
    sung.init();
    sung.tot_avg();
    sung.prin();

    return 0;
}