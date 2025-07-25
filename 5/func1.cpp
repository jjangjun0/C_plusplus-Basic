#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n);
float circle(float x);

int main(void)
{
    int a;
    cout << "정수를 입력하시오: ";
    cin >> a;
    cheers(a);
    //cin.get();

    int b;
    float c;
    cout << "원의 반지름의 길이를 입력하시오: ";
    cin >> b;
    c = circle(b);
    cout << "원의 넓이는 " << c << "입니다." << endl;

    return 0;
}

void cheers(int n) {
    for (int i = 0; i < n; i++)
        cout << "Cheers!" << endl;
}
float circle(float x) {
    return x * x * PIE;
}