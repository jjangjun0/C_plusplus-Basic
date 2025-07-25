#include <fstream>

using namespace std; // std::ofstream (파일에 쓰는 출력 스트림 클래스)

int main(void)
{
    // 파일 객체 변수(diskwritefile)
    ofstream diskwritefile("file01.txt"); // 파일 write
    diskwritefile.put('H');
    diskwritefile.put('A');
    diskwritefile.put('P');
    diskwritefile.put('P');
    diskwritefile.put('Y');

    diskwritefile.put(' ');
    diskwritefile.put('B');
    diskwritefile.put('I');
    diskwritefile.put('R');
    diskwritefile.put('T');
    diskwritefile.put('H');
    diskwritefile.put('D');
    diskwritefile.put('A');
    diskwritefile.put('Y');
    diskwritefile.put('\n');

    return 0;
}