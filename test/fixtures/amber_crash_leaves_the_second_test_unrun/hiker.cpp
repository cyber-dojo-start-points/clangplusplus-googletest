// Both tests call answer(), and answer() dereferences a null pointer, so
// whichever test runs first takes the binary down with it. The second never
// runs, and --gtest_shuffle means which one that is varies from run to run.
#include "hiker.hpp"

int answer()
{
    int * hikers = nullptr;
    return 6 * *hikers;
}
