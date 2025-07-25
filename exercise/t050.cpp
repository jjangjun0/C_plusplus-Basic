#include <iostream>

using namespace std;

union sungjuk { // 공용체
    char irum;
    int su;
    long sum;
};

int main(void)
{
    union sungjuk sung;
    sung.irum = 'A';
    cout << "irum : " << sung.irum << "\n";
    sung.su = 90;
    cout << "su : " << sung.su << "\n";
    sung.sum = 54321;
    cout << "sum : " << sung.sum << "\n";
    return 0;
}