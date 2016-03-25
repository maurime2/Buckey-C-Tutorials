/* 
 * File:    main.cpp
 * Author:  Mauricio S. Perez
 * Program: 39. Buckey - Pass By Reference with Pointers
 * Created on August 30, 2015, 7:11 PM
 * 
 * Objectives:
 * 
 * 01. Pass a variable by Reference using a pointer. 
 * 02. Compare to passing by value.
 * 03.
 * 04.
 * 
 * 
 */
//Libraries
#include <iostream>
using namespace std;

//Global Variables

//Function Prototypes
void passByValue(int);
void passByReference(int *);

//Execute Program
int main() {
    //Declare Variables
    int betty = 13;
    int sandy = 13;
    
    //Prompt1
    cout<< "Betty is initially: "<<betty<<endl;       //Initial Values of Betty and 
    cout<< "Sandy is initially: "<<sandy<<endl<<endl;//Sandy.
    
    //Run Functions pass by refference, pass by Value.
    passByValue(betty);                 //Functions showing Pass by Value
    passByReference(&sandy);           //and pass by reference.
    
    //Prompt2
    cout<< "betty is now: "<<betty<<endl;       //
    cout<< "sandy is now: "<<sandy<<endl<<endl;//    
    
    //Exit Stage Right
    return 0;
}

//Functions
    //Pass by Value [NO CHANGE IN MAIN]
    void passByValue(int x){
        //Set int x to 99
        x=99;
    }

    //Pass by Reference [CHANGE IN MAIN]]
    void passByReference(int *x){
        //Change the variable Sandy to 66
        *x=66;
    }