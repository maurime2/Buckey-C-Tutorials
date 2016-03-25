/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 38. Buckey - Intro to Pointers
 * Created on August 30, 2015, 7:02 PM
 * 
 * Objectives:
 * 
 * 01. Use a Pointer that Contains Memory Address as a value
 * 
 */
//Libraries
#include <iostream>
using namespace std;

//Global Variables

//Function Prototypes

//Execute Program
int main() {
    //Declare Variables
    int fish = 5;        //Plain old variable "fish" with value 5
    int *fishPointer;    //pointer
    
    //memory address of variable "fish"
    cout<<&fish<<endl; //address operator "&" gives memory location of fish
    
    //Set fishPointer to equal to the memorie address of fish
    fishPointer = &fish;
    
    //Print Pointer
    cout<<fishPointer<<endl;
    
    //Exit Stage RIght
    return 0;
}

