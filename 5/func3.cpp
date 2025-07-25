#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int arr[], int n);
int sumEvenArr(int* arr, int n);

int main(void)
{
    int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
    cout << "size of arr in main() " << sizeof(arr) << endl;
    int sum1 = sumArr(arr, SIZE);
    int sum2 = sumEvenArr(arr, SIZE);

    cout << "배열1의 총 합은 " << sum1 << " 입니다.\n";
    cout << "배열2의 총 합은 " << sum2 << " 입니다.";
    return 0;
}

int sumArr(int arr[], int n) {
    cout << "size of arr in sumArr() " << sizeof(arr) << endl;
    int total = 0;

    for (int i = 0; i < n; i++)
        total += arr[i];
    return total;
}
int sumEvenArr(int* arr, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            total += arr[i];
    }
    return total;
}