#include <iostream>
#include <cstring>

using namespace std;

#define SIZE 100

int main(void)
{
    char buffer[SIZE];
    int i, length;

    cout << "string : ";
    cin >> buffer;
    length = std::strlen(buffer);

    // 'a' ~ 'z' <=> 97 ~ 122, 'A' ~ 'Z' <=> 65 ~ 90
    for (i = 0; i < length; i++) {
        if (buffer[i] >= 'a' && buffer[i] <= 'z')
            buffer[i] = std::toupper(buffer[i]); // buffer[i] -= 32;
        else if (buffer[i] >= 'A' && buffer[i] <= 'Z')
            buffer[i] = std::tolower(buffer[i]); // buffer[i] += 32;
    }
    
    cout << buffer << "\n";

    return 0;
}