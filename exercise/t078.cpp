#include <fstream>

int main(void)
{
    std::ofstream fd("file02.txt");
    const char *p = "No pain, No gain";
    for (int i = 0; *(p + i) != '\0'; i++)
        fd.put(*(p + i));
    
    return 0;
}