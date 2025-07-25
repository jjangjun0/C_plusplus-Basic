#include <iostream>

using namespace std;

int main(void)
{
    // 구조체 : 다른 데이터형이 허용되는 데이터의 집합

    // 축구선수
    struct MyStruct {
        // 멤버
        string name;
        string position;
        float height;
        float weight;
    } C;

    MyStruct A;
    A.name = "Son";
    A.position = "Striker";
    A.height = 183;
    A.weight = 77;

    MyStruct B = {
        "Bak",
        "Striker",
        180,
        75
    };
    cout << A.name << " " << B.name << endl;

    C = {

    };
    cout << C.height << endl;

    MyStruct arr[2] = {
        { "A", "A", 1, 1 },
        { "B", "B", 2, 2 }
    };
    cout << arr[0].height << " " << arr[1].height << endl;
    
    return 0;
}