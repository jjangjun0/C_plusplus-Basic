#include <iostream>
#include <conio.h>

using namespace std;

class imsi {
    private:
        int i;
    public:
        void print(void);
        imsi(void); // 생성자
};

void imsi::print(void) {
    cout << "i = " << i << "\n";
}
imsi::imsi(void) {
    cout << "\n---생성자 코드---\n";
    i = 567;
}

int main(void)
{
    imsi seoul; // 자동적으로 생산자 함수를 호출한다.
    seoul.print();
    return 0;
}