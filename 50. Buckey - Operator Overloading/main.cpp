/* 
 * File:    main.cpp
 * Author:  Mauricio S. Perez
 * Program: 48. Buckey - this
  * Created on October 20, 2015, 3:28 PM
 * 
 * Objectives: Learn this
 * 
 * 01.  
 * 02.
 * 03.
 * 
 */
//Libraries
#include <iostream>
#include "Sally.h"
using namespace std;

//Main
int main(int argc, char** argv) {
    //Declare Variables
    Sally a(34);              //Sally object a, num =34
    Sally b(21);             //Sally object b, num =34
    Sally c;                //Blank Sally object c
    
    //Run the add together
    c=a+b;                  //a+b where + is the overloaded operator
    cout<<c.num<<endl;
    
    //Exit Stage Right
    return 0;
}

