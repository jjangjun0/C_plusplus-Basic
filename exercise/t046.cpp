#include <iostream>
#include <math.h>

using namespace std;

int digit(long what);
void arrange(long sour, int *dest);

int main(void)
{
    long a, b;
    int ad[10], bd[10], result[11], flag, i;

    cout << "Input two numbers : ";
    cin >> a >> b;
    for (i = 0; i < 10; i++)
        ad[i] = bd[i] = result[i] = 0;

    arrange(a, ad);
    arrange(b, bd);

    for (i = 0; i < 10; i++) {
        result[i] += ad[i] + bd[i];
        result[i+1] = result[i] / 10;
        result[i] %= 10;
    }
    cout << "\nResult : ";
    for (i = 10, flag = 0; i >= 0; i--) {
        if (result[i] || flag) {
            cout << result[i];
            flag = 1;
        }
    }
    return 0;
}

int digit(long what) {
    return (log(what) / log(10)); // 예: 1234 → log10(1234) ≈ 3.09 → 정수로 변환하면 3 (즉, 4자리: 0~3) => 자리수 계산
}
void arrange(long sour, int *dest) {
    int t, i;

    i = digit(sour);
    cout << sour << "'s digit : " << i << "\n"; // 배열은 0부터 시작이니, 정상 동작
    for (t = 0; i >= 0;i--) {
        dest[t++] = sour % 10; // 1의 자리 숫자부터 저장
        sour /= 10;
    }
}