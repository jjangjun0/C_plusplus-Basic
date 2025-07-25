#include <iostream>
#include <iomanip>

using namespace std;

const int MAX = 10;
//void sort(int *);
//void sort(char *);
template <class S> void sort(S *a) {
    S temp;
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - 1; j++) {
            if (*(a + j) > *(a + j + 1)) {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }
    cout << setprecision(2);
    for (int j = 0; j < MAX; j++)
        cout << *(a + j) << " ";
}

int main(void)
{
    int a[] = {4, 39, 6, 5, 33, 79, 65, 45, 88, 46};
    // char *c = "apyuhgweqb"; // 문자열 리터럴을 가리키는 코드, 읽기 전용에 저장되기에 쓰기가 불가하다.
    char str[] = "apyuhgweqb";
    char *c = str;

    sort(a);
    cout << "\n";
    sort(c);
    cout << "\n";

    return 0;
}