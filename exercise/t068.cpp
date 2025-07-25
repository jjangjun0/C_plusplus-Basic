#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>

using namespace std;

class haksa {
    private:
        int hakbun;
        char irum[16];
        float weight;
    public:
        friend std::ostream &operator << (std::ostream & out, haksa & sa); // 연산자 오버로딩 (<<)
        haksa(int = 30101, char [] = "김성진", float = 45.5);
        ~haksa(void);
};

haksa::haksa(int n, char p[], float s) {
    hakbun = n;
    strcpy(irum, p);
    weight = s;
}
haksa::~haksa(void) {}
std::ostream &operator << (std::ostream &out, haksa &sa) {
    out << setprecision(2) << setiosflags(ios::fixed);
    out << setiosflags(ios::showpoint);
    out << "학번: " << sa.hakbun << ", ";
    out << "이름: " << sa.irum << ", ";
    out << "몸무게: " << sa.weight << "\n";
    return out;
}

// 1. 왜 cout이 아니라 out << ...으로 쓰는가? => 이 함수는 << 연산자의 왼쪽 피연산자가 cout일 때도 작동해야 하기 때문이다.
// 2. 왜 파라미터가 (std::ostream &out, haksa &sa)인가? => "std::cout << s1; 다음과 같이 사용하기 위함이다.
// 3. 반환 타입이 왜 std::ostream& 인가? => 출력 연산자를 연쇄적으로 사용하기 위해서입니다.

int main(void)
{
    haksa s1;
    haksa s2(30201);
    haksa s3(30201, "정수경");
    haksa s4(30401, "강경태", 45.7);
    cout << s1 << s2 << s3 << s4;

    return 0;
}