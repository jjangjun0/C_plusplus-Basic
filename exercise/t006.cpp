#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    /* iomanip.h에 정의된 입출력 스트림 조작기
    dec : 10진수  
    hex : 16진수  
    oct : 8진수  
    ends : '\n'을 삽입하고 스트림 내용 삭제  
    endl : 문자열에 줄 문자 삽입  
    ends : 출력 스트림의 내용 삭제  
    flush : 출력 스트림의 내용 강제 출력  
    setfill(c) : c로 채워질 문자 설정  
    setprecision(int n) : n으로 부동 소수점의 유효 자리 설정  
    setw(int n) : n으로 필드의 폭 설정  
    setbase(int n) : n진수로 전환(2진수: 없음, 8진수: 8, 10진수: 10, 16진수: 16)  
    setiosflags(long f) : 표 III-2의 형식 플래그에 의해 지정된 형식 설정  
    resetiosflags(long f) : 표 III-2의 형식 플래그에 의해 지정된 형식 해제  
    */

    /* setiosflags()와 resetiosflags()를 위한 형식 플래그값
    ios::left : setw() 폭 안에 출력을 왼쪽으로 정돈  
    ios::right : setw() 폭 안에 출력을 오른쪽으로 정돈  
    ios::scientific : 부동 소수점 표기 (1.2345E2)  
    ios::fixed : 부동 소수점 표기 (123.45)  
    ios::dec : 숫자를 10진수 형식 지정  
    ios::hex : 숫자를 16진수 형식 지정  
    ios::oct : 숫자를 8진수 형식 지정  
    ios::uppercase : 16진수와 과학적 표기에서 문자를 대문자로 형식 지정  
    ios::showbase : 숫자 베이스 접두 문자 출력 (예: 0xFF)  
    ios::showpos : 양수를 출력할 때 + 부호 출력  
    ios::showpoint : 정밀도를 위해 필요하면 끝의 0들을 출력  
    */

    int a = 12345;
    cout << "1234567890123456789\n";
    cout << setw(8) << a << "\n"; // setw(8) : 8자리 설정
    cout << setw(10) << a << endl; // endl : "\n" && 버퍼 flush

    float b = 345.56789;
      // setprecision(2) : 소수점의 유효자리를 2자리로 설정
    cout << setprecision(2) << b << endl;
    cout << setw(10) << setprecision(3) << b << endl;
    cout << 5678 << "\n";
    cout << setw(10) << 5678 << "\n";
    cout << setiosflags(ios::left);
    cout << setw(10) << 5678 << setw(10) << 1234 << setw(10) << 87 << "\n";
    
    return 0;
}