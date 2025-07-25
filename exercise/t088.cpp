#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(void)
{
    char ch;
    const char *fname = "output.txt";

    std::ifstream fd(fname, ios::binary); // binary 모드로 파일 open

    if (!fd) {
        cerr << fname << " read error" << endl;
        exit(1);
    }
    
    while (fd.read(&ch, 1))
        cout << ch;

    fd.close();
    return 0;
}