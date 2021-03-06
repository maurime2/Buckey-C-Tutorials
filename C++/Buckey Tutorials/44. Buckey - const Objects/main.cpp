/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 44. Buckey - const Objects
 * Created on August 30, 2015, 11:16 PM
 * 
 * Objects:
 * 
 * 01. Use Constants "const" datatype
 * 02. Create a class that access regular class and a const class.
 * 03. 
 * 04. 
 * 
 */

//Libraries
#include <iostream>
#include "Sally.h"
using namespace std;

//Global Variables

//Function Prototypes

//Execute Program
int main() {
    //Declare Variables
    const int x = 3;          //Constant Variable
    Sally salObj;            //Object: to access Sally Class Function.
    const Sally constObj;   //Constant Object to access Const Sally Class Function.
    
    //Prompt
    salObj.printShiz();      //Object - Used to access Function
    constObj.printShiz2();  //Constant Object -  Used to access Const Functions.
    
    //Exit Stage Right
    return 0;
}

