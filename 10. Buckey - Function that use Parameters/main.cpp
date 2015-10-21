/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 10. Buckey - Function that use Parameters
 * Created on August 29, 2015, 1:59 PM
 */

//libraries
#include <iostream>
using namespace std;

//Declare Function Prototype
void printCrap(int);              //Declared Function Prototype to use Later.

//Execute Program
int main() {
   
    //Declare Variables
    int x = 30;                 //Integer that will be used as Parameter
    
    //Call Function
    printCrap(x);               //Function Called with Parameter x
    
    //Exit Stage Right
    return 0;
}

//Function
void printCrap(int x){
    cout<<"Buckey's Fav number is "<<x<<endl; // Prints Text w/Parameter
}