#include <iostream>

using namespace std;

void countDown(int n);
int func(int);

int main(void)
{
    // 재귀호출
    countDown(5);

    // 함수를 지시하는 포인터 : 함수에 해당하는 기계어 코드를 저장하는 메모리 블록의 시작 주소
    // 어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우에 유용하게 사용한다.

    // 1. 함수의 주소를 얻는다.
    // 2. 함수를 지시하는 포인터를 선언한다.
    // 3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출한다.
    cout << "Address of func: " << (void*)func << endl;
    // cout << func << endl; // func은 null이 아닌 함수 포인터 → bool로 변환됨
    
    int (*pf)(int);
    pf = func;
    cout << (*pf)(3) << endl;

    return 0;
}

void countDown(int n) {
    cout << "Counting..." << n << endl;
    if (n > 0)
        countDown(n-1);
    cout << n << "번째 재귀함수 종료\n";
}

int func(int n) {
    return n+1;
}