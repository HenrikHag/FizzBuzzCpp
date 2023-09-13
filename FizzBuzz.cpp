#include <iostream>
#include <random>

int main(int argc, char const *argv[])
{
    // Maximum number of rounds
    int countto = 16;

    // Generate random numbers
    std::random_device dev;
    const uint_least32_t seed = dev();
    std::mt19937 generator(seed);
    std::uniform_real_distribution<double> distribute(0.0,1.0);

    // Testing first random number
    // std::cout << distribute(generator) << "\n";

    // FizzBuzz loop
    for (int i = 1; i <= 16; ++i) {
        if (i%3==0 & i%5==0) {
            std::cout << "fizz bizz, ";
        } else if (i%3==0) {
            std::cout << "fizz, ";
        } else if (i%5==0) {
            std::cout << "bizz, ";
        } else {
            std::cout << i << ", ";
        }
    }
    return 0;
}
