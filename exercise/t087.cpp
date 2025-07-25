#include <iostream>

int main(void)
{
    FILE *fp = fopen("output.txt", "r");
    if (fp == NULL) {
        perror("File open error!");
        exit(1);
    }

    char buffer[256];

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        std::cout << buffer;
    }

    fclose(fp);
    return 0;
}