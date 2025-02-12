
#ifndef PASSGEN.H
#define PASSGEN.H
using namespace std;

#include <string>
#include <random>
#include <fstream>
#include <iostream>
#include <algorithm>

struct Require{
    int pass_length;
    int number_of_nums;
    int* numbers; //dynamic array for numbers
    char* special_chars; //dynamic array for special chars "%$#@"
    int num_of_special_chars;

    Require(int len, int num) : pass_length(len), number_of_nums(num), num_of_special_chars(0){
       numbers = new int[number_of_nums]; // allocate memory for numbers
       special_chars = nullptr; //initializing array as null
    }
}

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
    bool readPasswords(ifstream& infile);
    string generation(const string& input_pass);

};
#endif
