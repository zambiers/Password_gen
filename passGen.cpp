#include "passGen.h"
#include <string>
#include <random>
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

/*
~{}~~~~~~~~~~~~~~~~~~~~~~{}~
    Constructors
~{}~~~~~~~~~~~~~~~~~~~~~~{}~   
*/
Generate::Generate(){
    input_pass = "";
}
Generate::~Generate(){
    erase();
}


/*
~{}~~~~~~~~~~~~~~~~~~~~~~{}~
    Public methods
~{}~~~~~~~~~~~~~~~~~~~~~~{}~
*/

bool Generate::readPasswords(ifstream& infile){

//Base Case: checks if the file is open
    if(!infile.is_open()){
        cout << "This is not the correct file. Returning..." << endl;
        return false;
    }
//Case: file is open
    while(get_line(infile, input_pass)){
        generation(input_pass);
    }

    return true;
}

string Generate::generation(const string &input_pass){

//Base Case: input password is null
    if(input_pass == null || input_pass.empty()){
        cout << "Input password is NULL. Try again..." << endl;
        return input_pass;
    }

    string newPass;

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
~{}~~~~~~~~~~~~~~~~~~~~~~{}~
    Display Functions
~{}~~~~~~~~~~~~~~~~~~~~~~{}~    
*/
void Generate::print(){
    /*
        grab all the new passwords

        first
            * print out old passwords
        second
            * print out new passwords
    */
}

/*
~{}~~~~~~~~~~~~~~~~~~~~~~{}~
    Private methods
~{}~~~~~~~~~~~~~~~~~~~~~~{}~
*/
bool Generate::erase(){
    return false;
}
