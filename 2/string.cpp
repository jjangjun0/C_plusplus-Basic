#include <iostream>
#include <cstring> // strlen() 함수를 사용하기 위해서

using namespace std;

int main()
{
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++Programming";

    cout << "안녕하세요! 저는 " << name2;
    cout << "입니다! 성함이 어떻게 되시나요?\n";
    //cin >> name1;
    cin.getline(name1, Size); // 공백을 포함하여 저장할 수 있다.
    //cin.get(name1, Size); // 이 경우 버퍼에 '\n'이 남아 있다.
    //cin.get(); // 이와 같이 '\n'을 없애줘야 한다.
    
    cout << "음, " << name1 << "씨, 당신의 이름은 ";
    cout << strlen(name1) << " 자입니다만\n";
    cout << sizeof(name1) << " byte 크기의 배열에 저장되었습니다.\n";
    cout << "이름이 " << name1[0] << " 자로 시작하는군요.\n";
    name2[3] = '\0';
    cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
    cout << name2 << endl;

    // '\n'을 사용하는 경우는 fflush()를 보장하지 않는다.
    // endl; 을 사용하는 경우는 fflush()를 보장한다.

    // cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
    // cout을 사용하여 string 객체를 디스플레이할 수 있다.

    // 배열을 통째로 저장할 수 없지만, string 객체를 통해 가능하다!
    char arr1[20];
    char arr2[20] = "jauar";
    string str1;
    string str2 = "panda";
    // arr1 = arr2;
    str1 = str2;
    cout << str1 << endl;

    return 0;
}