#include <iostream>

int main(int argc, char const *argv[])
{
    int countto = 16;

    for (int i = 0; i<16; i++) {
        if (i%3==0 & i%5==0) {
            std::cout << "fizz bizz, ";
        } else if (i%3==0)
        {
            std::cout << "fizz, ";
        } else if (i%5==0)
        {
            std::cout << "bizz";
        } else
        {
            std::cout << i;
        }
    }
    return 0;
}
