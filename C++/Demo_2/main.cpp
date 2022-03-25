#include <iostream>
#include <vector>
#include <string>
#include "hello.h"

using namespace std;

int main()
{
    vector<string> msg {"Hello", "CMake"};
    test(msg);
    return 0;
}