//Libraries
#include <iostream>
#include "Hannah.h"
using namespace std;

Hannah::Hannah(int num) 
: h(num)
{
}

void Hannah::printCrap(){
    cout<<"h="<<h<<endl;                //When you print out a variable, returns the value.
    
    cout<<"this->h="<<this->h<<endl;  //The address of ho, use this 
                                     //object, and that object has variable h.
    
    
    cout<<"(*this).h="<<(*this).h<<endl;     //Dereferencing Pointer: Takes Memory location of object, and
                                            // calls the variables value.
    cout<<""<<endl;
                
    
}

Hannah::~Hannah() {
}

