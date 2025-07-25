#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct ssu_employee {
    char name[64];
    int salary;
};

int main(void)
{
    struct ssu_employee record;
    const char *fname = "employeefile";
    fstream fd;
    int record_num;

    fd.open(fname, ios::in | ios::binary);
    if (!fd.good()) {
        cerr << fname << "is not opened!" << endl;
        exit(1);
    }

    /* 1. Record 조사 */
    while (1) {
        cout << "Enter record number : ";
        cin >> record_num;

        if (record_num < 0)
            break;
        fd.clear();  // 파일 오프셋 초기화
        if (!fd.seekg((long)record_num * sizeof(record), ios::beg).good()) {
            cerr << "seekg error" << endl;
            exit(2);
        }

        fd.read((char *)&record, sizeof(record));
        if (!fd.eof()) {
            cout << "Employee : " << record.name << ", ";
            cout << "Salary : " << record.salary << "\n";
        }
        else {
            cout << "Record " << record_num << " not found\n";
        }
    }

    /* 2. Record에 있는 모든 고용인들의 임금의 총합 구하기 */
    int i = 0;
    long sum = 0;
    fd.clear();
    cout << "----- ----- ----- ----- -----\n";
    while (1) {
        if (!fd.seekg((long)i * sizeof(record), ios::beg).good())
            break;
        
        fd.read((char *)&record, sizeof(record));
        if (fd.eof())
            break;
        cout << "Employee : " << record.name << ", ";
        cout << "Salary : " << record.salary << "\n";
        sum += record.salary;
        i++;
    }
    cout << "----- ----- ----- ----- -----\n";

    cout << i << "명, ";
    cout << "총합 : " << sum << ", ";
    cout << "평균 임금 : " << fixed << setprecision(2) << (long double)sum / i << "\n";
    fd.close();
    return 0;
}