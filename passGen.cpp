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
    // random_device rd;
    // mt19937 gen(rd());//random number generator
    // uniform_int_distribution<> dist(0,25);// random letter generation for lowercase
    // int num_index = 0, special_char_index = 0;

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
// //special char
//     for(char ch: input_pass){
//         if(isalpha(ch)){//if it's a letter
//             newPass += ch;

//             if(num_index < requirements.number_of_nums){
//                 newPass += to_string(requirements.numbers[num_index++]);
//             }
            
//             if(num_index < requirements.number_of_nums){
//                 newPass += to_string(requirements.numbers[num_index++]);
//             }
//         }

//         else if( (isdigit(ch))){
//             newPass += ch;
        
//             if(special_char_index < requirements.num_of_chars 
//                 && requirements.special_char_index != nullptr){
//                     newPass += requirements.special_char_index[special_char_index++];
//             }
//         }
         
//         else{
//             newPass += ch;

//             char randomLetter = 'a'  dist(gen);
//             if(rand() % 2 == 0){
//                 randomLetter = toupper(randomLetter);
//             }
//             newPass += randomLetter;
//         }
//     }

//     if(newPass.length() > requirements.max_length){
//         newPass += newPass.substr(0, requirements.max_length);
//     }

//     cout << "New Password: " << newPass << endl;

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
    return false;
}
