#include <iostream>

using namespace std;

void process(char *a);

int main(void)
{
    char *a = "abcdef"; // warning: ISO C++ forbids converting a string constant to 'char*'
    // c++에서는 const char * 형으로 치환한다. -> 고칠 수 없다.
    // 쉽게 말해 char * 형 변수가 문자열 리터널을 가리킨다고 간주하기 때문이다.
    // 그래서 char a[] = "abcdef"; 와 같이 작성해야 수정 가능한 복사본을 생성하기에 값을 변형시킬 수 있게 된다.

    process(a);
    cout << a << "\n";

    return 0;
}

void process(char *a) {
    cout << "process\n";
    int i;
    for (i = 0; *(a + i) != '\0'; i++)
        *(a + i) += 1; // Runtime Error!
    cout << "end\n";
}