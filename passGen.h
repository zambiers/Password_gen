
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
/*
    Data members
*/
    string input_pass;

/*
    Functions
*/   
    bool erase();

public:
/*
    Constructors and Destructors
*/

    Generate();
    ~Generate();

/*
    Main functions
*/
    //bool readPasswords(ifstream& infile);
    string generation(const string& input_pass, int len, int upper_letters,
                        int char_nums, int letter_amount);

/*
    Display Functions
*/
    void print();

};
#endif
