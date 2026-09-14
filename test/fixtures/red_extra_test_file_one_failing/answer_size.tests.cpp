#include "hiker.hpp"
#include <gtest/gtest.h>
#include <string>

using namespace ::testing;

TEST(AnswerSize, The_answer_is_three_digits_long)
{
    ASSERT_EQ(3u, std::to_string(answer()).size());
}
