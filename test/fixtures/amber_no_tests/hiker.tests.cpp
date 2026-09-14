// A test file holding no TEST at all. Nothing in the objects handed to the
// linker refers to gtest, and libgtest comes before libgtest_main on the
// link line, so the symbols libgtest_main wants are already behind it by the
// time it is read. The binary never links, there is no run at all, and the
// rag-lambda sees neither a PASSED line nor a FAILED line, so this is amber.
#include "hiker.hpp"
#include <gtest/gtest.h>

using namespace ::testing;
