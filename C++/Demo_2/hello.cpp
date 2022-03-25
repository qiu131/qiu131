#include <iostream>
#include <vector>
#include <string>
#include "hello.h"

using namespace std;

void test(const vector<string>& msg){
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    return;
}
