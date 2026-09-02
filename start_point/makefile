# Each .cpp is compiled on its own and the objects are linked, rather than
# handing the compiler every source at once. Most of a [test] press is spent
# parsing GoogleTest's headers; compiling separately is what lets the files that
# include them be compiled at the same time as each other.
MAKEFLAGS += --jobs

CXXFLAGS += -I.
CXXFLAGS += -std=c++2a
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -Wshadow
CXXFLAGS += -Wfloat-equal
# Not optimised. A kata's test binary runs for a few milliseconds, so nothing
# here is waiting on how fast the code runs, and optimising it costs more time
# in the compiler than it ever gives back.
CXXFLAGS += -O0
CXXFLAGS += -Wsequence-point
CXXFLAGS += -Wmissing-noreturn
CXXFLAGS += -Wunreachable-code

CXXFLAGS += -fprofile-arcs -ftest-coverage

CXXFLAGS += -fsanitize=leak,address
CXXFLAGS += -fno-sanitize-recover=undefined
CXXFLAGS += -fno-omit-frame-pointer

GTEST_LIBS = -lgtest -lgtest_main -pthread

HPP_FILES = $(wildcard *.hpp)
COMPILED_HPP_FILES = $(patsubst %.hpp,%.compiled_hpp,$(HPP_FILES))
CPP_FILES = $(wildcard *.cpp)
OBJ_FILES = $(patsubst %.cpp,%.o,$(CPP_FILES))

.PHONY: test.output
test.output: test makefile
	@./$< --gtest_shuffle

test: $(OBJ_FILES) $(COMPILED_HPP_FILES)
	@$(CXX) $(CXXFLAGS) $(OBJ_FILES) $(GTEST_LIBS) -o $@

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

# This rule ensures header files build in their own right.
# The quality of header files is important because header files
# are #included from other files and thus have a large span
# of influence (unlike .cpp files which are not #included)

%.compiled_hpp: %.hpp
	@$(CXX) -x c++ $(CXXFLAGS) -c -o $@ $<
