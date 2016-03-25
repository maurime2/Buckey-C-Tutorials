/* 
 * File:   Sally.cpp
 * Author: Dell
 * 
 * Created on October 20, 2015, 3:28 PM
 */
//Libraries
#include <iostream>
#include "Sally.h"
using namespace std;

//Class Sally: Blank
Sally::Sally() {
}

//Class Sally: Takes in int
Sally::Sally(int a){
    num = a;
}

//Class Sally: takes in two Sally objects to add them                    
Sally Sally::operator +(Sally aso){    //num = a, aso = b
    Sally brandNew;                   //Creates brandNew sally object
    brandNew.num = num + aso.num;    //Gives brandNew a value
    return(brandNew);               //Returns new sally object
}

Sally::~Sally() {
}