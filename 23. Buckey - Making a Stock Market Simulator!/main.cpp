/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Program: 23. Buckeys - Making a Stock Market Simulator!
 * Created on August 30, 2015, 12:41 AM
 * 
 * Objectives:
 * 01. Stock Market Simulator.
 * 02. Use For Loop to calculate.
 * 03. Use exponential function, part of "cmath" libraries.
 * 
 */

//Libraries
#include <iostream>
#include <cmath>
using namespace std;

//No Function Prototype

//Execute Program
int main() {
    //Declare Variables
    float a;                // Amount of money Earned            
    float p=10000;         //Principle Account
    float r = .01;        //Interest Per Day
    
    //For Loop
    for(int day = 1; day <=20; day++){
        a = p * pow(1+r, day);       // "amount" = "principle investment" 
                                    // * ( 1+"Rate") to the "day" Exponent
    
        //Print Amount to screen.
        cout<<day<< " ---- " <<a << endl;
    }
   
    //Exit Stage Right
    return 0;
}

