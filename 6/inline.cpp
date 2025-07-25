#include <iostream>
using namespace std;

inline float square(float x) { return x * x; }

const int SIZE = 8;
int sumArr(int arr[], int n = 2);

int main(void)
{
    /* 인라인 함수
    일반적으로 함수의 호출은 함수의 주소로 점프하는 과정이다.
      인라인 함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
      컴파일러의 인라인 함수 호출 == 점프가 아닌 그에 대응하는 함수 코드로 대체
    */
    int a = 5;
    cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는?" << endl;
    float b = square(a);
    cout << b << endl;

    /* 디폴트 매개변수
    함수 호출에서 정의되지 않은 파라미터에 대해서
    디폴트 값이 정의되어 있다면 그 값이 함수 호출문에서 적용된다.
    // -> 포인터 디폴트는 어떻게??
    */
    int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
    int sum = sumArr(arr);
    cout << "함수의 총 합은 " << sum << " 입니다." << endl;

    return 0;
}
int sumArr(int arr[], int n) {
    cout << "size of arr in sumArr() " << sizeof(arr) << endl;
    int total = 0;

    for (int i = 0; i < n; i++)
        total += arr[i];
    return total;
}