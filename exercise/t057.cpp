#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class seoul {
    private:
        char data_ch;
        int data_int;
        float data_float;
        void checkdata(char a, int b, float c);
    public:
        void get_let(char a, int b, float c);
        void get_out(void);
};
void seoul::get_let(char a, int b, float c) {
    this->checkdata(a, b, c);
    this->data_ch = a;
    this->data_int = b;
    this->data_float = c;
}
inline void seoul::checkdata(char a, int b, float c) {
    if (a < 'a' || a > 'z') {
        std::cerr << a << "는 잘못된 입력입니다.\n";
        exit(1);
    }
    if (b < 10 || b > 99) {
        std::cerr << b << "는 두 자리 자연수가 아닙니다.\n";
        exit(1);
    }
    if (c < 0.0 || c > 100.0) {
        std::cerr << c << "는 0 ~ 100 사이의 실수가 아닙니다.\n";
        exit(1);
    }
}
inline void seoul::get_out(void) {
    std::cout << "data_ch = " <<data_ch<< ", ";
    std::cout << "data_int = " <<data_int<< ", ";
    std::cout << "data_float = " <<data_float<< "\n";
}

int main(void)
{
    class seoul city;
    //city.get_let('A', 57, 35.2);
    city.get_let('a', 10, 10.567);
    city.get_out();

    return 0;
}