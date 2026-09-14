#include "hiker.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(Hiker, Life_the_universe_and_everything)
{
    ASSERT_EQ(42, answer());
}

TEST(Hiker, The_answer_is_a_multiple_of_seven)
{
    ASSERT_EQ(0, answer() % 7);
}
