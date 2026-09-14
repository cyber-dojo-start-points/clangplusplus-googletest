#include "hiker.hpp"
#include <gtest/gtest.h>
#include <string>

using namespace ::testing;

TEST(Hiker, Life_the_universe_and_everything)
{
    ASSERT_EQ(42, answer());
}

TEST(Hiker, The_answer_is_two_digits_long)
{
    ASSERT_EQ(2u, std::to_string(answer()).size());
}

TEST(Hiker, The_answer_is_even)
{
    ASSERT_EQ(0, answer() % 2);
}
