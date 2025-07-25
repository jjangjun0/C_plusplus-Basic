#include <iostream>

using namespace std;

#define M 10
void fun(void) {
    static int i; // 정적 변수 i 선언 -> 프로그램이 종료될 때까지 남아 영향을 준다.
    
    i++;
    cout << i << " ";

    if (i < M)
        fun();
}

int main(void)
{
    fun();
    return 0;
}