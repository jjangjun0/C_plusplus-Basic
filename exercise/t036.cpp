#include <iostream>

using namespace std;

int main(void)
{
    int b[] = {12, 13, 55, 66, 77};
    int i, *a;

    a = &b[0];
    for (i = 0; i < 5; i++) {
        cout << "a + " << i << " = " << a + i << ", "; // a는 b의 주소값을 가지고 있다.
        cout << "*(a + " << i << ") = " << *(a + i) << "\n";
    }

    int *p = b; // int *p = &b[0];

    for (i = 0; i < 5; i++, p++) {
        cout << "b[" << i << "] : " << b[i] << ", ";
        cout << "*p = " << *p << "\n";
    }

    return 0;
}