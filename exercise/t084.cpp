#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

class sung {
    private:
        int hakbun;
        char irum[16];
        int kor;
        int eng;
        int mat;
    public:
        void print(int i) {
            cout << "\n";
            cout << "학번 : " << this->hakbun << ", ";
            cout << "이름 : " << this->irum << ", ";
            cout << "국어: " << this->kor << ", ";
            cout << "영어: " << this->eng << ", ";
            cout << "수학: " << this->mat << ", ";
            cout << "총점: " << kor+eng+mat << ", ";
            cout << "평균: " << (kor+eng+mat) / 3.0 << "\n";
        }
};

int main(void)
{
    // seekg(0, ios::beg); => 파일 오프셋을 파일의 처음으로 이동
    // seekg(0, ios::end); => 파일 오프셋을 파일의 마지막으로 이동

    // seekg(25, ios::beg); => 파일 오프셋을 파일의 처음에서부터 25byte 이동
    // seekg(-val, ios::end); => 파일 오프셋을 파일의 마지막에서부터 "val" byte로 이동 ??

    fstream file;
    sung juk;
    file.open("file09.txt", ios::in | ios::out | ios::binary);
    
    file.seekg(0, ios::beg);
    file.read((char *)&juk, sizeof(juk));

    file.seekg(3 * sizeof(juk), ios::beg);
    file.read((char *)&juk, sizeof(juk));

    file.seekg(0, ios::beg);
    file.read((char *)&juk, sizeof(juk));
    juk.print(1);

    file.read((char *)&juk, sizeof(juk));
    juk.print(2);

    file.read((char *)&juk, sizeof(juk));
    juk.print(3);

    file.read((char *)&juk, sizeof(juk));
    juk.print(4);

    return 0;
}