#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

const int SU = 5;  // 학생 수
const int KW = 3;  // 과목 수 (국어, 영어, 수학)

class sungjuk {
private:
    int hakbun;         // 학번
    char *irum;         // 이름
    int jumsu[KW];      // 점수 배열
    int tot;            // 총점

public:
    sungjuk();
    sungjuk(int h, char* name, int j1, int j2, int j3);
    void prin1(sungjuk *);
    void prin2(void);
};

sungjuk::sungjuk() {}
sungjuk::sungjuk(int h, char* name, int j1, int j2, int j3) {
    hakbun = h;
    irum = name;
    jumsu[0] = j1;
    jumsu[1] = j2;
    jumsu[2] = j3;
    tot = 0;
}
void sungjuk::prin1(class sungjuk *sung) {
    cout << "\n===== ===== ===== ===== ===== ===== ===== =====\n";
    cout << "학번   이름       국어  영어  수학  총점   평균\n";
    cout << "===== ===== ===== ===== ===== ===== ===== =====\n";

    for (int i = 0; i < SU; i++)
        (sung +i)->prin2();

    cout << "===== ===== ===== ===== ===== ===== ===== =====\n";
}
inline void sungjuk::prin2(void) {
    cout << setw(5) << hakbun << " ";
    cout << setiosflags(ios::left) << setw(10) << irum << " ";
    cout << resetiosflags(ios::left);
    for (int i = 0; i < KW; i++) {
        cout << setw(6) << jumsu[i];
        tot += jumsu[i];
    }
    cout << setw(6) << tot;
    cout << fixed << setprecision(2) << setw(7) << (float)tot / KW << "\n";
}
int main(void) {
    sungjuk sung[] = {
        sungjuk(30101, "김소라", 99, 88, 77),
        sungjuk(30102, "아름다워", 78, 98, 87),
        sungjuk(30103, "박희정", 89, 100, 80),
        sungjuk(30104, "정다워", 97, 92, 80),
        sungjuk(30105, "이정진", 91, 90, 81)
    };

    class sungjuk *su;
    su->prin1(sung);

    return 0;
}