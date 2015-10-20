/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 42. Buckey - Arrow Member Selection Operator
 * Created on August 30, 2015, 10:25 PM
 * 
 * Objectives:
 * 
 * 01. Arrow Member Selection Operator (->)
 * 02. Create New Class
 * 03. Create new Header File
 * 04.
 * 
 */
//Libraries
#include <iostream>
#include "Sally.h"
using namespace std;

//Execute Program
int main() {
    //Declare Variables      //each method of accessing data
    Sally sallyObject;      //Object to use as key to access Sally class
    Sally *sallyPointer = &sallyObject; //Sally Pointer Pointing to object
                                       //Pointer can be used to access 
                                      //Sally class
    
    //Use Object to access function "printCrap()" in Sally Class.
    cout<<"Object oriented way: ";
    sallyObject.printCrap();     //Methos 1: Object and variable name
    
    cout<<endl<<"Pointer oriented way: ";
    sallyPointer->printCrap();   //Method 2: Pointer w/ Arrow Member Selection 
                                //Operator w/ variable name
    //Exit Stage Right
    return 0;
}

//Libraries