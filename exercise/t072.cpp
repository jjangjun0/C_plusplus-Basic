#include <iostream>

template <typename T> std::ostream &operator,(std::ostream & out, T value) {
    out << value;
    return out;
}

int main(void)
{
    std::cout, "a = ", 35, "\n";

    return 0;
}