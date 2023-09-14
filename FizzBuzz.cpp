#include <iostream>
#include <random>
#include <chrono>
#include <thread>

int main(int argc, char const *argv[])
{
    // Maximum number of rounds
    int count_to = 50;

    // Generate random numbers
    std::random_device rng_dev;
    const uint_least32_t seed = rng_dev();
    std::mt19937 rng_generator(seed);
    std::uniform_int_distribution<uint32_t> uniform_distribute(50, 100);

    // Testing first random number
    // std::cout << distribute(generator) << "\n";

    // Testing time delay
    // std::this_thread::sleep_for(std::chrono::nanoseconds(2000000000));

    // FizzBuzz loop
    for (int i = 1; i <= count_to; ++i) {
        auto rand_int = uniform_distribute(rng_generator);
        if (rand_int == 100) {
            std::cout << "Haha!! Too slow!\n";
            break;
        }
        auto auto_timedelay = std::chrono::milliseconds(10 * rand_int); // random delay
        std::this_thread::sleep_for(auto_timedelay);
        if (i%3==0 && i%5==0) {
            std::cout << "fizz bizz\n";
        } else if (i%3==0) {
            std::cout << "fizz\n";
        } else if (i%5==0) {
            std::cout << "bizz\n";
        } else {
            std::cout << i << "\n";
        }
    }
    std::cout << "Game has ended!\n";
    return 0;
}
