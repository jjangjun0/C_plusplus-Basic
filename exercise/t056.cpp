#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

class seoul {
    private:
        char data_ch;
        int data_int;
        float data_float;
    public:
        void get_key(void);
        void get_let(char a, int b, float c);
        void get_out(void);
        float get_return(void);
};
inline void seoul::get_key(void) {
    std::cout << "data_ch : "; cin >> data_ch;
    std::cout << "data_int : "; cin >> data_int;
    std::cout << "data_float : "; cin >> data_float;
}
inline void seoul::get_let(char a, int b, float c) {
    this->data_ch = a;
    this->data_int = b;
    this->data_float = c;
}
inline void seoul::get_out(void) {
    std::cout << "data_ch = " <<data_ch<< ", ";
    std::cout << "data_int = " <<data_int<< ", ";
    std::cout << "data_float = " <<data_float<< "\n";
}
inline float seoul::get_return(void) {
    return data_float;
}

int main(void)
{
    seoul city, gu;
    float hab;
    city.get_key();
    city.get_out();
    gu.get_let('A', 57, 35.2);
    gu.get_out();

    hab = city.get_return() + gu.get_return();
    cout << "\nhab = " << hab << "\n";
}