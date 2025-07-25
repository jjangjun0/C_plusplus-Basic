#include "struct.h"
// 헤더파일을 여러 파일에 포함시킬 때,
// 반드시 단 한 번만 포함시켜야 한다.

void display(const MyStruct &temp) {
    cout << "이름 : " << temp.name << "\n";
    cout << "나이 : " << temp.age << endl;
}