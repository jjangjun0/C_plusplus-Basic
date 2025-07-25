#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(void)
{
    std::ifstream fd("file03.txt");             // 파일 read

    cout << "good() : " << fd.good() << "\n";   // 파일 open 시 오류 발생하지 않는 경우 1 return => 많이 쓰임
    cout << "eof() : " << fd.eof() << "\n";     // 파일의 끝을 검사하는 함수
    cout << "fail() : " << fd.fail() << "\n";   // 하드웨어 오류, read&write 오류, !fd 검사 => 많이 쓰임
    cout << "bad() : " << fd.bad() << "\n";     // 하드웨어 오류와 파일 없음 오류만을 검사
    
    return 0;
}