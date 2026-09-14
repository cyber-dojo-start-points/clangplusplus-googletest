// A test file named .c, and broken as well. The makefile gathers its source
// files with $(wildcard *.cpp), so this file is never compiled and the code
// below is never seen by a compiler. A green light here says a learner who
// mistypes the extension gets no warning at all: the file simply vanishes
// from the build, mistakes and all.
#include "hiker.hpp"

int the_answer_is_two_digits_long(
{
    return answer() < 100;
}
