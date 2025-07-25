#include <iostream>

void swap(float &, float &);

using namespace std;

int main(void)
{
    int num1 = 300;
    int &num2 = num1; // reference (참조) 변수
    cout << "num1 : " << num1 << ", ";
    cout << "num2 : " << num2 << "\n";
    
    num1 += 500;
    cout << "num1 : " << num1 << ", ";
    cout << "num2 : " << num2 << "\n\n";

    float f1, f2;
    f1 = 5.7; f2 = -9.8;
    // float &a, &b; // 참조변수는 선언과 동시에 초기화를 해야 한다.
    // a = &f1;
    float &a = f1;
    float &b = f2;
    cout << "f1 : " << f1 << ", ";
    cout << "f2 : " << f2 << "\n";
    swap(a, b);
    cout << "f1 : " << f1 << ", ";
    cout << "f2 : " << f2 << "\n";

    return 0;
}

void swap(float &a, float &b) {
    float temp;
    temp = a;
    a = b;
    b = temp;
}