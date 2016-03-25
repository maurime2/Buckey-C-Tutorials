/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 27. Buckeys - Random Number Generator
 * Created on August 30, 2015, 3:00 PM
 * 
 * Objectives:
 * 01. Use the Random Number Generator
 * 02. Use "cstdlib" libraries, function "rand" 
 * 03. Use "rand" function from "cstdlib".
 * 04. Clear random generator to give us new values every time
 * 05. Use "srand" function in "cstdlib" libraries.
 * 06. Use "ctime" to create real random numbers with the use of computer clock.
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//No Function Prototypes

//Execute Program
int main() {
    //No Declare Variables
    
    //Seed a random Number through "srand" function
    srand(time(0));                         //Calculates the second since 1970
    
    //Call "rand" as a roll of dice
    for(int x = 1; x<25; x++){          //For loop will run 25 times
            //Prints 0 for 1-9         //if loop will print 0 for 1-9 tries
            if(x<10){                 //for formating.
            cout<<"0";
            }
        //Prints Random Number
        cout<<x<<": "<< 1+(rand()%6)<<endl; //Prints Random numbers
    }
    
    //Exit Stage Right
    return 0;
}

