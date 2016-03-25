/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 09. Buckey - Function
 * Created on August 29, 2015, 1:38 PM
 */

//libraries
#include <iostream>
using namespace std;

//Declare Function Prototype
void printSomething();              //Declared Function Prototype to use Later.

//Execute Program
int main() {
    
    //Call Function
    printSomething();
    
    //Exit Stage Right
    return 0;
}

//Function
void printSomething(){
    cout<<"Text on the string"<<endl; // Prints Text on screen
}