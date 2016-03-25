/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 22. Buckeys - for Loop
 * Created on August 30, 2015, 12:30 AM
 * 
 * Objective:
 * 01. Understand For Loops
 * 
 */

//Libraries
#include <iostream>
using namespace std;

//No Function Prototype

//Execute Program
int main(){

    //For Loop          (Initialisation, Loop Continuation Condition, Increment)
    for(int x = 5; x<50; x += 5){   //(Initialise variable with starting value,
        cout<< x<< endl;           //give it an ending value, 
                                  //how much you want to increment each time)
    }
    
    //Exit Stage Right
    return 0;
}

