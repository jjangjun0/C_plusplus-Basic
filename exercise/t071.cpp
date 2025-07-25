#include <iostream>
#include <iomanip>
#include <string.h>

class string {
    private:
        char data[256];
    public:
        string(char *);
        int operator ==(class string);
        void print_string(void);
};

string::string(char *str) {
    strcpy(data, str);
}
int string::operator==(class string str) {
    for (int i = 0; data[i] == str.data[i]; i++)
        if ((data[i] == NULL) && (str.data[i] == NULL))
            return 1;
    return 0;
}
void string::print_string(void) {
    std::cout << data << std::endl;
}

int main(void)
{
    class string title("seoul:busan:");
    class string lesson("seoul:busan:");
    class string str("seoul:busan");
    if (title == lesson)
        std::cout << "title == lesson\n";
    if (lesson == str)
        std::cout << "lesson == str\n";
    else
        std::cout << "lesson != str\n";
    return 0;
}