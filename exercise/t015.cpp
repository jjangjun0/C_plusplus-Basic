#include <iostream>
using namespace std;

const int NUM = 3;
int main(void)
{
    for (int i = 1; i <= NUM; i++) {
        for (int j = NUM-i; j >= 1; j--)
            cout << " ";
        for (int j = 1; j < i; j++)
            cout << "#";
        cout << "#";
        for (int j = 1; j < i; j++)
            cout << "#";
        for (int j = NUM-i; j >= 1; j--)
            cout << " ";
        cout << "\n";
    }
    cout << endl;

    int rows = 3; // 총 줄 수
    for (int i = 0; i < rows; i++) {
        // 공백 출력
        for (int j = 0; j < rows - i - 1; j++) {
            cout << ' ';
        }
        // '#' 출력 (한 번의 cout << '#' 사용)
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << '#';
        }
        cout << "\n";
    }
    cout << endl;

    int N = 7;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N/2 - i; j++)
            cout << "#";
        cout << "\n";
    }

    int totalLines = 5;
    int half = totalLines / 2;

    for (int i = 0; i < totalLines; i++) {
        int spaceCount, hashCount;

        if (i <= half) {
            spaceCount = i;
            hashCount = totalLines - 2 * i;
        } else {
            spaceCount = totalLines - 1 - i;
            hashCount = 2 * (i - half) + 1;
        }

        // 공백 출력
        for (int j = 0; j < spaceCount; j++) {
            cout << ' ';
        }

        // '#' 출력
        for (int j = 0; j < hashCount; j++) {
            cout << '#';
        }

        cout << endl;
    }

    return 0;
}