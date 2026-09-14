// Nothing includes this file and nothing calls checksum(), and it still
// decides the outcome: the makefile gathers its source files with
// $(wildcard *.cpp), so every .cpp file here is compiled.
int checksum()
{
    return 7
}
