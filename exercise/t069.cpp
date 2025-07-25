#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>

class string {
    private:
        char data[256];
    public:
        string(char *);
        void operator +(char *);  // 더하기 연산자 함수의 오버로딩
        void operator -(char);    // 빼기 연산자 함수의 오버로딩
        void print_string(void);
};

string::string(char *str) {
    strcpy(this->data, str);
}
void string::operator +(char *str) {
    strcat(this->data, str);
}
void string::operator -(char letter) {
    char temp[256];
    int i, j;
    for (i = 0, j = 0; data[i]; i++)
        if (this->data[i] != letter)
            temp[j++] = data[i];
    temp[j] = NULL;
    strcpy(this->data, temp);
}
void string::print_string(void) {
    std::cout << this->data << std::endl;
}

int main(void)
{
    class string title("seoul:busan:");
    class string lesson("Oriented-Object Programming C++");
    
    title.print_string();
    title+"daejun:kwangju:";
    title.print_string();
    lesson.print_string();
    lesson-'O';
    lesson.print_string();

    return 0;
}