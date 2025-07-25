#include <iostream>
#include <string.h>

using namespace std;

int main(void)
{
    // 1. 문자열 복사 //
    char a[] = "                ";
    char b[] = "                ";

    strcpy(a, "high school");
    strncpy(b, "high school", 5);

    cout << a << "\n";
    cout << b << "\n";
    cout << "----- ----- ----- ----- -----\n";

    // 2. 문자열 연결 //
    char c[] = "seoul";
    char d[] = " busan";

    strcat(c, d);
    cout << c << "\n";

    strncat(c, d, 4);
    cout << c << "\n";
    cout << "----- ----- ----- ----- -----\n";

    // 3. 문자열 발췌 //
    char e[] = "busan station";
    char *p, *q;

    p = strchr(e, 's');  //처음 나오는 s를 가리킴
    q = strrchr(e, 's'); // 마지막에 나오는 s를 가리킴

    cout << "|p = " << p << "|" << "\n";
    cout << "|q = " << q << "|" << "\n";
    cout << "----- ----- ----- ----- -----\n";

    // 4. 문자열 비교 //
    const char *x1 = "seoul busan";
    const char *x2 = "seoul kwangju";
    int y1, y2;
    y1 = strcmp(x1, x2); // x1이 작으면 -1, 같으면 0, 크면 1 리턴
    y2 = strncmp(x1, x2, 5);

    cout << "y1 = " << y1 << ", ";
    cout << "y2 = " << y2 << "\n";
    cout << "----- ----- ----- ----- -----\n";

    // 5. 문자열 길이 //
    int length;
    length = strlen(x1);
    cout << "\"" << x1 << "\" length is " << length << "\n";
    cout << "----- ----- ----- ----- -----\n";

    // 6. 대문자 <-> 소문자 change //
    char z1[] = "seoul station";
    char z2[] = "BUSAN STATION";
    char *temp1, *temp2;

    temp1 = strupr(z1);
    temp2 = strlwr(z2);
    cout << "z1 = " << temp1 << "\n";
    cout << "z2 = " << temp2 << "\n";
    cout << "----- ----- ----- ----- -----\n";

    // 7. 같은 문자로 나열하는 문자열 생성 //
    char z3[] = "     ";
    strset(z3, '*');
    cout << "z3 = " << z3 << "\n";
    cout << "----- ----- ----- ----- -----\n";

    // 8. 문자열 역순으로 만들기 //
    char z4[] = "seoul";
    char *z5;
    z5 = strrev(z4);
    cout << "z5 = " << z5 << "\n";

    // 9. 수치 변환 함수 (문자열로 변환) //
    char dae[20], *san;
    int digit, dec, si;

    itoa(12005, dae, 10); // 정수형 데이터 -> 문자열 // itoa, Itoa, ecvt는 비표준 함수 => std::to_string()로 사용
    cout << dae << "\n";

    ltoa(98765, dae, 10); // 장정도형 데이터 -> 문자열
    cout << dae << "\n";

    san = ecvt(340.12378, 8, &dec, &si); // 실수형 데이터 -> 문자열
    cout << san << ",, decimal point = " << dec << ",, sign = " << si << "\n";
    return 0;
}