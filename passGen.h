
#ifndef PASSGEN.H
#define PASSGEN.H
using namespace std;

#include <string>
#include <random>
#include <fstream>
#include <iostream>
#include <algorithm>

class Generate{
private:
    string input_pass;

public:

    bool readPasswords(const string& filename);
    string generation(const string& input_pass);

};
#endif
