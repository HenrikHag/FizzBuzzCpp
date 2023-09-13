#include <iostream>
#include <random>
#include <chrono>
#include <thread>

int main(int argc, char const *argv[])
{
    // Maximum number of rounds
    int countto = 16;

    // Generate random numbers
    std::random_device dev;
    const uint_least32_t seed = dev();
    std::mt19937 generator(seed);
    std::uniform_int_distribution<uint32_t> distribute(50, 100);

    // Testing first random number
    // std::cout << distribute(generator) << "\n";

    // Testing time delay
    // std::this_thread::sleep_for(std::chrono::nanoseconds(2000000000));

    // FizzBuzz loop
    for (int i = 1; i <= 16; ++i) {
        uint32_t timedelay = 10000000; // 0.01 sec
        timedelay = timedelay * distribute(generator); // random delay
        std::this_thread::sleep_for(std::chrono::nanoseconds(timedelay)); 
        if (i%3==0 & i%5==0) {
            std::cout << "fizz bizz\n";
        } else if (i%3==0) {
            std::cout << "fizz\n";
        } else if (i%5==0) {
            std::cout << "bizz\n";
        } else {
            std::cout << i << "\n";
        }
    }
    return 0;
}
