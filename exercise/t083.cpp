#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class sung {
    private:
        int hakbun;
        char irum[16];
        int kor;
        int eng;
        int mat;
    public:
        sung() {hakbun = 0;}
        sung(int ha, char ir[], int ko, int en, int ma) {
            this->hakbun = ha;
            strcpy(this->irum, ir);
            this->kor = ko;
            this->eng = en;
            this->mat = ma;
        }
        ~sung() {};
        int get_hakbun(void) { return this->hakbun; }
        char *get_irum(void) { return this->irum; }
        int get_kor(void) { return this->kor; }
        int get_eng(void) { return this->eng; }
        int get_mat(void) { return this->mat; }
};

int main(void)
{
    sung temp;
    const char *fname = "file09.txt";
    std::ifstream fd(fname, ios::binary); // binary 모드로 파일 open

    if (!fd) {
        cerr << fname << " read error" << endl;
        exit(1);
    }
    
    while (!fd.eof()) {
        fd.read((char *)&temp, sizeof(sung));
        if (!temp.get_hakbun())
            break;
        cout << "학번 : " << temp.get_hakbun() << ", ";
        cout << "이름 : " << temp.get_irum() << ", ";
        cout << "국어 : " << temp.get_kor() << ", ";
        cout << "영어 : " << temp.get_eng() << ", ";
        cout << "수학 : " << temp.get_mat() << "\n";
    }

    fd.close();
    return 0;
}