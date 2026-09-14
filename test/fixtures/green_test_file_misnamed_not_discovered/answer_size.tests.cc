// Valid C++ holding a real test, but named .cc, and the makefile gathers its
// source files with $(wildcard *.cpp), so this file is never compiled and
// never linked into the test binary. The assertion below is one that would
// fail, so a green light says this file really did not run rather than that
// it ran and passed.
#include "hiker.hpp"
#include <gtest/gtest.h>
#include <string>

using namespace ::testing;

TEST(AnswerSize, The_answer_is_three_digits_long)
{
    ASSERT_EQ(3u, std::to_string(answer()).size());
}
