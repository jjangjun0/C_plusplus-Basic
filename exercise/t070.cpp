#include <iostream>
#include <conio.h>

using namespace std;

class aclass {
    private:
        float x;
        int i;
    public:
        aclass(float x, int i);
        int operator+(const aclass &rightarg);
};

aclass::aclass(float x, int i) {
    this->x = x;
    this->i = i;
}
int aclass::operator+(const aclass &rightarg) {
    return this->i + rightarg.i;
}

int main(void)
{
    aclass a1(35.34, 50), a2(78.35, 70);
    int tot = a1 + a2;
    cout << "tot = " << tot << "\n";

    return 0;
}