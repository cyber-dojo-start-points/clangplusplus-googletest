#include "hiker.hpp"
#include <iostream>

// The learner put a print inside a loop to see what was happening, and it
// prints far more than the 50K the runner keeps.
int answer()
{
    int total = 0;
    for (int i = 0; i != 5000; i++)
    {
        std::cout << "debug: i is " << i << ", total is " << total << std::endl;
        total += 6;
    }
    return 6 * 7;
}
