#include <fstream>
#include <string.h>

int main(void)
{
    // std::ofstream fd("file03.txt", std::ios::app);

    std::ofstream fd("file03.txt"); // 기본적으로 O_TRUNC
    const char *str = "Soongsil\n";
    for (int i = 0; i < strlen(str); i++)
        fd.put(str[i]);
    fd << "University\n";

    return 0;
}