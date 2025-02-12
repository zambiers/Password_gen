#include "passGen.h"
#include <string>
#include <random>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    Constructors
*/
Generate::Generate(){
    input_pass = "";
}
Generate::~Generate(){

}


/*
    Public methods
*/

bool Generate::readPasswords(ifstream& infile){
    /*
        if it's not the correct file --> return file

        while it's the correct file
            * each line = input_pass
            * pass it to generation func()
    */
    return false;
}

string Generate::generation(const string &input_pass){

    if(input_pass == null){
        cout << "Input password is NULL. Try again..." << endl;
        return input_pass;
    }
    /*
          
        take each line of file
        take in requirements of password

        for each letter, 
            * add two numbers
        for each number 
            * add 1 character
        for each special character, add a letter
            * randomize upper and lower
    
    */
    
    return string();
}

/*
    Private methods
*/
bool Generate::erase(){
    return false;
}
