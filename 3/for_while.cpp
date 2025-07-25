#include <iostream>

using namespace std;

int main(void)
{
    char a[10] = { 'a', 'b', 'c', 'd', 'e' };
    for (int i = 0; i < 5; i++)
        cout << a[i];
    cout << endl;

    // 증가연산자 or 감소연산자
    int v1, v2;
    v1 = v2 = 10;

    cout << "v1는 " << v1 << ", v2는 " << v2 << "\n";
    cout << "v1++: " << v1++ << "\n";
    cout << "++v2: " << ++v2 << "\n";
    cout << "  연산 후의 v1는 " << v1 << ", v2는 " << v2 << endl;
    // < | <= | > | >= | == | !=

    string str = "Panda";
    int i = 0;
    while (str[i] != '\0') {
        cout << str[i] << " ";
        i++;
    }
    cout << endl;

    bool j = false;
    do {
        cout << "do while\n";
    } while (j);

    // 배열 관련..
    int b[10] = { 1, 3, 5, 7, 9 };
    for (int i : b) {
        cout << i;
    }
    cout << endl;
    // 중첩 반복문
    int temp[4][5] = {
        { 1, 2, 3, 4, 5 },
        { 2, 4, 6, 8, 10 }
    };
    for (int row = 0; row < 4; row++) {
        for (int col = 0; col < 5; col++) {
            cout << temp[row][col] << " ";
        }
        cout << "\n";
    }
    cout << endl;

    return 0;
}