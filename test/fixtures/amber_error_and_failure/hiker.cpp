#include "hiker.hpp"

// checksum() is declared in hiker.hpp and called from the tests, but nothing
// defines it, so the test binary does not link. The 6 * 9 below is a failure
// waiting to be reported, and the error above it means no test ever runs to
// report it.
int answer()
{
    return 6 * 9;
}
