/* 
 * File:    Sally.cpp
 * Author : Mauricio S. Perez
 * Program: 44. Buckey - const Objects
 * 
 * Objectives:
 * 
 * 01.
 * 02.
 * 03.
 * 
 * Created on August 30, 2015, 11:20 PM
 */
//Libraries
#include "Sally.h"
#include <iostream>
using namespace std;

//Constructor
Sally::Sally() {
}

//function
    void Sally::printShiz(){
        //Print Text
        cout<<"I'm Just a Regular Function"<<endl; 
    }
    
 //Constant Function Object
    void Sally::printShiz2() const{
    cout<<"I am the Constant Function";
    }