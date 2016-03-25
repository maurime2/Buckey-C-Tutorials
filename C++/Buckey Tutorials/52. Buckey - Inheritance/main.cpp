/* 
 * File:    main.cpp
 * Author:  Mauricio S. Perez
 * Program: 52. Buckey - Inheritance
 * Created on October 20, 2015, 3:47 PM
 * 
 * Objectives: Inheritance
 * 
 * 01.  Learn Inheritance
 * 02.  
 * 03.
 * 
 */

//Libraries
#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

//Main
int main(int argc, char** argv) {
    //Declare Variables
    Mother mom;             //Mother Object
    mom.sayName();          //Mother object used sayName function
    
    //Daughter to inherit
    Daughter tina;             //Mother Object
    tina.sayName();          //Mother object used sayName function    
    
    
    //Exit Stage Right
    return 0;
}

