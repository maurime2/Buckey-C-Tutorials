/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program; 29. Buckey - Unary Scope Resolution Operator
 * Created on August 30, 2015, 3:31 PM
 * 
 * Objectives:
 * 01. Observe "Scope" of variables (GLobal, Inside Functions)
 * 02.
 * 03.
 * 04.
 * 
 */
//Libraries
#include <iostream>
using namespace std;

//Global Variables
int tuna = 20;

//Function Prototypes
void buckey();

//Execute Program
int main() {
    //Declare Variables
    int tuna = 19;
    
    //call tuna in LOCAL VARIABLES;
    cout<<tuna<<" From LOCAL  Variable accessed in Main."<<endl;
   
    //Call tuna in GLOBAL Variables;
    cout<<::tuna<<" From GLOBAL Variable accessed in Main."<<endl;       //Unary Scope Resolution Operator to call 
                             //tuna in Global variable.
    
    //Call Function Buckey
    buckey();
    
    //Exit Stage RIght
    return 0;
}

//Functions
void buckey(){
    //Call Global Function
    cout<<tuna<<" From GLOBAL variable accessed in Function."<<endl;
}