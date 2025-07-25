#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>

using namespace std;

class seoulclass {
    private:
        int num;
        void init(int i);
        void print(void);
        friend class busanclass; // busanclass가 seoulclass의 private 멤버에 접근 가능하게 함
};

void seoulclass::init(int i) {
    num = i;
}
void seoulclass::print(void) {
    cout << "number(1) : " << num << "\n";
    num *= 5;
    cout << "number(2) : " << num << "\n";
}

class busanclass {
    private:
        seoulclass classvar;
    public:
        void prdata(int nu1);
};

void busanclass::prdata(int nu1) {
    classvar.init(nu1);
    classvar.print();
}

int main(void)
{
    /* seoulclass의 private 영역에 "friend class busanclass;" 코드의 효과 */
    // seoulclass의 캡슐화를 유지하면서도,
    // 특정 클래스(busanclass)가 선택적으로 접근할 수 있도록 권한을 부여한다. 
    busanclass num3;
    num3.prdata(33);

    return 0;
}