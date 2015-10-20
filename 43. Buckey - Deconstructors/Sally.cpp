/* 
 * File:   Sally.cpp
 * Author : Mauricio S. Perez
 * Program: 43. Buckey - Deconstructors
 * Created on August 30, 2015, 11:03 PM
 */
//Libraries
#include "Sally.h"
#include <iostream>
using namespace std;

//Global Variables

//Function Prototypes

//Constructor
Sally::Sally(){
    //Prompt
    cout<<"I am the Constructor"<<endl;
    
}

//Deconstructor
Sally::~Sally(){                        //No Parameters    
    cout<<"I am the Destructor"<<endl;  //No Overloading
}                                     //No Return Value