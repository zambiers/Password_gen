#include "passGen.h"
#include <string>
#include <random>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Public methods
*/

bool Generate::readPasswords(const string &filename){
    /*
        if it's not the correct file --> return file

        while it's the correct file
            * each line = input_pass
            * pass it to generation func()
    */
    return false;
}

string Generate::generation(const string &input_pass){
    /*
        take each line of file
        take in requirements of password

        for each letter, add two numbers
        for each number add 1 character
        for each special character, add a letter
            * randomize upper and lower
    
    */
    
    return string();
}
