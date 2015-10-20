/* 
 * File:   Sally.cpp
 * Author: Dell
 * 
 * Created on August 31, 2015, 9:04 AM
 */

#include "Sally.h"
#include <iostream>
using namespace std;

Sally::Sally(int a, int b) 
: regVar(a),                 //List for Member Initializers
  constVar(b)               //For Constant Variables.    
{
}

void Sally::print(){
    cout<<"Regular var is: "<<regVar<<", const variable is: "<<constVar<<endl;
}



Sally::~Sally() {
}

