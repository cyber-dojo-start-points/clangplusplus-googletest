// answer() dereferences a null pointer, so the test binary dies part way
// through the run. googletest prints the [ RUN ] line for the test it was in
// and nothing after it, so there is no PASSED line and no FAILED line for the
// rag-lambda to read, and the run is amber rather than red.
#include "hiker.hpp"

int answer()
{
    int * hikers = nullptr;
    return 6 * *hikers;
}
