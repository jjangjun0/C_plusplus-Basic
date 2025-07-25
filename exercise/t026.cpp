#include <iostream>

using namespace std;
static int i = 10;
static int j = 20;
void fun_33(void);


int main(void)
{
    extern int k;

    cout << "i = " << i << ",,, j = " << j << ",,, k = " << k << "\n";
    fun_33();
    return 0;
}

int k = 30;
void fun_33(void) {
    cout << "i = " << i << ",,, j = " << j << ",,, k = " << k << "\n";
}