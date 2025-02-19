#include "passGen.h"
#include "passGen.cpp"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream infile("Fix_these.txt");
    if(!infile){
        cout << "This is not the correct file..." 
             << " Please try another file... Thank you <3" << endl;
             return 1;
    }

    while(infile){
        Generate pswrd;
        int max_length;
        int special_chars_nums;
        int letter_nums;
        int uppercase_nums;

        cout << "What is the max length for each password?" << endl;
        cin >> max_length;

        cout << "How many special character for each password?" << endl;
        cin >> special_chars_nums;

        cout << "How many letters for each password?" << endl;
        cin >> letter_nums;

        cout << "How many of said letter should be capital" << endl;
        cin >> uppercase_nums;


        if(infile.eof()){
            cout << "All passwords should be counted for..." << endl;
            getline(file, line);
            generation(line, max_length, uppercase_nums, special_chars_nums, letter_nums);
            break;
        }

        if(pswrd.readPasswords(infile) > 0){
            cout << "New passwords: " << endl;
            pswrd.print();
        }

    }
    infile.close();
    
    return 0;
}