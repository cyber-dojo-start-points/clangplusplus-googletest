#include "hiker.hpp"

int answer()
{
    // The learner meant to count up to 42 and never moves n. Declaring n
    // volatile keeps the compiler reading it on every pass, so the loop is
    // the one the learner wrote rather than one the optimiser folded away.
    volatile int n = 0;
    while (n != 42)
    {
    }
    return n;
}
