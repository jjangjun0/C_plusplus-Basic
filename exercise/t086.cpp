#include <iostream>

int main(void)
{
    FILE *fp = fopen("output.txt", "w");
    if (fp == NULL) {
        perror("File open error!");
        exit(1);
    }

    fputs("동해물과 백두산이 마르고 닳도록\n", fp);
    fputs("C++ 끝\n", fp);

    fclose(fp);

    return 0;
}