#include <iostream>
#include <cstring> // strlen(), strcspn() : 처음 나타나는 인덱스를 반환하는 함수
using namespace std;

#define M 3

int main(void)
{
    static char c[][6] = { "happy", "new", "year" };
    for (int i = 0; i < M; i++)
        cout << c[i] << "\n";

    static char ch[M][6];
    for (int i = 0; i < M; i++) {
        cout << "ch[" << i << "] : ";
        //gets(ch[i]);  // warning: call to 'gets' declared with attribute
                        // warning: Using gets() is always unsafe - use fgets() instead [-Wattribute-warning]
        fgets(ch[i], sizeof(ch[i]), stdin);
        ch[i][strlen(ch[i]) - 1] = '\0';
        //ch[i][strcspn(ch[i], "\n")] = '\0';
    }
    
    cout << "---   ---\n";
    for (int i = 0; i < M; i++)
        puts(ch[i]);
    return 0;
}