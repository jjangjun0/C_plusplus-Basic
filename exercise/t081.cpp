#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main(void)
{
    const char *fname = "file03.txt";
    /*
     * ios::in => read 모드
     * ios::out => write 모드       // 기존 파일 내용 삭제(TRUNC)
     * ios::app => append 모드      // 기존 내용은 그대로, 파일 끝에서부터 새로운 데이터를 write
     * ios::ate => 파일 포인터를 파일의 끝으로 이동시킨다.
     * ios::nocreate =>         파일이 존재하지 않으면 에러     // 표준 C++에 포함되지 않음
     * ios::noreplace =>        파일이 이미 존재한다면 에러     // 표준 C++에 포함되지 않음
     * ios::trunc => 기존의 파일 내용에 겹쳐서 write
    */

    // c++에서는 open은 O_CREAT가 디폴트로 설정된다. 즉, 파일이 없으면 생성한다.
    // 그래서 read 모드로 열어보고 안 열리면 .good = 0일테니, 그것을 통해
    // 파일의 존재 여부를 판단할 수 있다.
    std::ifstream temp_fd(fname);
    if (!temp_fd.good()) {
        std::cerr << fname << " 파일이 존재하지 않습니다." << std::endl;
        exit(1);
    }

    std::fstream fd;        // default: 파일 read & write
    fd.open(fname, ios::app); // 파일 open하면서 인자로 셋팅할 수 있다.

    fd << "설악산\n";
    fd << "지리산\n";
    fd << "금강산\n";
    fd << "한라산\n";

    return 0;
}