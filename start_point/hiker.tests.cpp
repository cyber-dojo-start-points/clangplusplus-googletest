#include "hiker.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

TEST(Hiker, global_function)
{
    ASSERT_EQ(42, answer());
}

TEST(Hiker, instance_method)
{
    ASSERT_EQ(42, hiker().answer());
}
