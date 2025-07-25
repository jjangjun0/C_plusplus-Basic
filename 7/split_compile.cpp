// 구조체 선언 & 함수의 원형 선언 부분 //
/*
 * 1. 함수의 원형
 * 2. #define (매크로)나 const를 사용하는 기호 상수
 * 3. 구조체 선언
 * 4. class 선언
 * 5. template 선언
 * 6. 인라인 함수
 */
  // -> struct.h로 이동 //

#include "struct.h" //#include "func.cpp" OR g++ split_compile.cpp func.cpp

// 메인 함수 부분 //
int main(void)
{
    MyStruct PandaCoding = {
        "Panda",
        26
    };
    display(PandaCoding);

    return 0;
}

// 함수의 몸체 정의 부분 //
  // -> func.cpp로 이동 //