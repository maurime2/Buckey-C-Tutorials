/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Program: 19. Buckey - Simple Program Using a Loop
 * Created on August 29, 2015, 11:37 PM
 * 
 * Objectives:
 * 01. Program wIll enter 5 Different Numbers
 * 02. Numbers will be totaled
 * 03. Must Use a while loop
 */

//Libraries
#include <iostream>
using namespace std;

//No Function Prototype

//Execute Program
int main() {

    //Declared Variables
    int x = 1;                          // "x" holds initial value 1 for loop.
    int number = 0;                    // "number" will hold user inputs.
    int total = 0;                    // "total" will hold total of sums.
    
    //While Loop
    while(x<=5){                                //This while loop will loop 5 
        cout<<"Enter a number to be totaled: ";//times. Will add a user input
        cin>>number;                          //stored in "number" to be later 
        total = number + total;              //added to total. 
        x++;
    }
    
    //Total Displayed                       //Prints Total
    cout<<"Your Total Is: "<<total<<endl;
    
    //Exit Stage RIght
    return 0;
}

