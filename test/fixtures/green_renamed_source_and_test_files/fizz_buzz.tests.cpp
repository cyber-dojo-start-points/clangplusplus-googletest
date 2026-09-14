#include "fizz_buzz.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(FizzBuzz, Life_the_universe_and_everything)
{
    ASSERT_EQ(42, fizz_buzz());
}
