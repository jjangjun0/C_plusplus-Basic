#include <iostream>
#include <iomanip> // setprecision(), setw()
#include <conio.h> // getch()
#include <cstdlib> // system()
#include <cmath> // pow(), sqrt()

using namespace std;
const int NUM = 3;

int main(void)
{

    int a, b, c;
    a = b = 4;
    c = 7;
    cout << "a && b = " << (a && b) << "\n";
    cout << "a > b > c = " << ((a > b) > c) << "\n";
    cout << "a^b = " << (a^b) << "\n"; // XOR 연산
    getch();
    system("cls");

    /* 정수들을 입력 받아 표준 편차 구하는 프로그램 */
    int x[NUM], sum = 0;
    double avg, sum2[NUM], dispersion = 0, standard_deviation;
    cout << "국어, 수학, 영어 점수를 순서대로 입력하세요 : ";
    for (int i = 0; i < NUM; i++)
        cin >> x[i];
    sum = x[0] + x[1] + x[2];
    avg = sum / 3.0; // 평균 계산
    for (int i = 0; i < NUM; i++)
        sum2[i] = x[i] - avg; // 편차 계산
    for (int i = 0; i < NUM; i++)
        dispersion += pow(sum2[i], 2); // 편차의 제곱의 합
    dispersion /= NUM;
    standard_deviation = sqrt(dispersion);

    // 결과 출력
    cout << "입력받은 점수는 순서대로 ";
    for (int i = 0; i < NUM; i++)
        cout << x[i] << " ";
    cout << "인 학생의 평균은 " << fixed << setprecision(2) << avg << "이고,\n";
    cout << "분산은 " << fixed << setprecision(2) << dispersion << ", ";
    cout << "표준 편차는 " << fixed << setprecision(2) << standard_deviation << "이다.\n";

    return 0;
}