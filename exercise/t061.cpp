#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>

using namespace std;

class sawon_b;
class sawon_a {
    private:
        char irum[14];
        char jumin[15];
        int age;
    public:
        void init(char *, char *, int);
        friend void print(class sawon_a p1, class sawon_b p2);
};
class sawon_b {
    private:
        char irum[14];
        char jumin[15];
        int age;
    public:
        void init(char *, char *, int);
        friend void print(class sawon_a p1, class sawon_b p2);
};

void sawon_a::init(char *ir, char *ju, int ag) {
    strcpy(irum, ir);
    strcpy(jumin, ju);
    age = ag;
}
void sawon_b::init(char *ir, char *ju, int ag) {
    strcpy(irum, ir);
    strcpy(jumin, ju);
    age = ag;
}

int main(void)
{
    sawon_a s1, s2;
    sawon_b s3, s4;

    s1.init("정다워", "860929-1401110", 17);
    s2.init("한소라", "861220-2402222", 17);
    s3.init("김선진", "860302-1367110", 17);
    s4.init("한국진", "860505-1234222", 17);
    print(s1, s3);
    print(s2, s4);

    return 0;
}

void print(class sawon_a p1, class sawon_b p2) {
    cout << "p1 : ";
    cout << p1.irum << ", " << p1.jumin << ", " << p1.age << "\n";
    cout << "p2 : ";
    cout << p2.irum << ", " << p2.jumin << ", " << p2.age << "\n\n";
}