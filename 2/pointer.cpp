#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{

    int val = 3;
    cout << &val << endl;

    // C++ : 객체지향 프로그래밍 언어
    // 컴파일 시간이 아닌 실행 시간에 주소 공간이 결정된다.

    // 재래적 절차적 프로그래밍 : 배열의 크기를 미리 정해야 한다.
    // 객체지향적 프로그래밍 : 배열의 크기를 실행 시간에 결정된다.
    
    // pointer : 사용할 주소에 이름을 붙인다.
    // 즉, 포인터는 포인터의 이름이 주소를 나타낸다. 간접값 연산자, 간접 참조 연산자 *

    //int *a; // c 스타일
    //int* b; // c++ 스타일

    int a = 6;
    int* b;
    b = &a;

    cout << "a의 값 " << a << endl;
    cout << "*b의 값 " << *b << endl;
    cout << "a의 주소 " << &a << endl;
    cout << "*b의 주소 " << b << endl;

    *b = *b + 1;
    cout << "*b는 a의 주소값이기에, a의 주소에 있는 값을 +1 하게 된다.\n a: " << a << endl;

    // new 연산자
    // 어떤 데이터형을 원하는지 new 연산자에게 알려주면, new 연산자는 그에 알맞는 크기의 메모리 블록을 찾아내고,
    // 그 불록의 주소를 리턴한다.

    int* pointer = new int;
    // delete 연산자
    // 사용한 메모리를 다시 메모리 폴로 환수
    // 환수된 메모리는 프로그램의 다른 부분이 다시 사용한다.
    delete pointer;

    /*
    * 1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다.
    * 2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
    * 3. new[]로 메모리를 대입할 경우, delete[]로 해제한다.
    * 4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.
    */

    double* p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";

    cout << "--- change *p3 ---\n";
    p3 = p3 + 1;
    cout << "Now p3[0] is " << p3[0] << ", ";
    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 - 1;
    delete[] p3;
    // cin.get();

    char animal[20];
    char* ps;
    cout << "동물 이름을 입력하시오: ";
    //cin >> animal;
    cin.getline(animal, 20);
    ps = new char[strlen(animal) + 1];    // 동적 구조체
    strcpy(ps, animal);

    cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << "입니다.\n";
    cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;

    // 동적 구조체 생성
    // temp* ps = new temp;
    // 정적 구조체의 멤버 연산자 '.'
    // 동적 구조체의 멤버 연산자 '->'

    struct MyStruct {
        char name[20];
        int age;
    };
    MyStruct* temp = new MyStruct;

    cout << "이름을 입력하세요: ";
    cin >> temp->name;
    cout << "나이를 입력하세요: ";
    cin >> (*temp).age;

    cout << "  " << temp->name << "씨의 나이는 " << temp->age << "입니다." << endl;

    return 0;
}