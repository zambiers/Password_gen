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

// bool Generate::readPasswords(ifstream& infile){

// //Base Case: checks if the file is open
//     if(!infile.is_open()){
//         cout << "This is not the correct file. Returning..." << endl;
//         return false;
//     }
// //Case: file is open
//     while(get_line(infile, input_pass)){
//         generation(input_pass,);
//     }

//     return true;
// }

string Generate::generation(const string& input_pass, int len, int upper_letters,
        int char_nums, int letter_amount){

//Base Case: input password is null
    if(input_pass == null || input_pass.empty()){
        cout << "Input password is NULL. Try again..." << endl;
        return input_pass;
    }

//data members and devices that will be needed
    string newPass;
    int j; // temp number
    char k; // temp char and letter

    for(int i = 0; i <= input_pass.length(); i++){
        if(i = isalpha(input_pass[i])){
            //add for loop, max 2
            j = rand();
            input_pass.append(j)
            i++;
            break;
        }

        else if ( !(i = isalpha(input_pass[i])) ){
            charOrLetter(i);
            // if(i == isdigit()){

            // }
            k = 'a' + rand() % 26;
            input_pass.append(k);
            i++;
            break;
        }
    }


    return newPass;

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
    //TODO: Add me
    return false;
}

bool Generate::charOrLetter(char ch){
    return isdigit(ch) || ispunct(ch);
}
