#ifndef STRUCT
#define STRUCT

#include <iostream>
using namespace std;

struct MyStruct {
    string name;
    int age;
};

void display(const MyStruct &temp); // const : 멤버 변수에 대해서 값의 변화가 없을 때

#endif // !STRUCT

/* [Include Guard]
 * #ifndef, #define, #endif 를 사용해 헤더 파일이 여러 번 포함되는 걸 방지하는 전처리기 지시문
 * ifndef를 통해 STRUCT가 있는지 확인하고, 존재하면 #endif로 jump
 *
 * #define STRUCT와 #endif 사이에 있는 코드가 단 한 번만 포함된다!
 */