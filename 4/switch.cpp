#include <iostream>

using namespace std;

int main(void)
{
    int a;
    cin >> a;
    cin.get();
    switch (a) {
        case 1:
            cout << "입력하신 값은 1입니다.";
            break;
        case 2:
            cout << "입력하신 값은 2입니다.";
            break;
        case 3:
            cout << "입력하신 값은 3입니다.";
            break;
        default:
            cout << "1, 2, 3 이외의 값입니다.";
            break;
    }
    cout << "\nswitch end" << endl;

    // break
    int i = 0;
    while (1) {
        if (i > 10)
            break;
        cout << "i: " << i << "\n";
        i++;
    }
    cout << endl;

    // continue
    char line[30];
    int spaces = 0;
    cout << "문장을 입력하시오: ";
    cin.get(line, 30);
    cout << "입력하신 문장은 ";
    for (int i = 0; line[i] != '\0'; i++) {
        cout << line[i];

        if (line[i] != ' ')
            continue;

        spaces++;
    }
    cout << " 입니다.\n";

    cout << "입력하신 문장에서 공백 문자 개수는 ";
    cout << spaces << "입니다." << endl;

    return 0;
}