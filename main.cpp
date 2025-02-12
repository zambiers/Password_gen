#include "passGen.h"
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

        if(infile.eof()){
            cout << "All passwords should be counted for..." << endl;
            break;
        }

        if(pswrd.readPasswords(infile) > 0){
            cout << "New passwords: " << endl;
            pswrd.print();
        }

    }
    
    return 0;
}