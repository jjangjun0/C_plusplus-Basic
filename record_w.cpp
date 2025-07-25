#include <iostream>
#include <fstream>

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
    fd.open(fname, ios::out);
    if (!fd.good()) {
        cerr << fname << "is not opened!" << endl;
        exit(1);
    }

    while (1) {
        cout << "Enter employee name <SPACE> salary : ";
        cin >> record.name >> record.salary;
        if (record.name[0] == '.')
            break;
        fd.write((char *)&record, sizeof(record));
    }
    fd.close();

    return 0;
}