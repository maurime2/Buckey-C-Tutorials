/* 
 * File:   People.cpp
 * Author: Dell
 * 
 * Created on October 20, 2015, 1:46 PM
 */

//libraries
#include "People.h"
#include "Birthday.h"
#include <iostream>
using namespace std;

People::People(string x, Birthday bo)     //Name String and a Birthday Object
: name(x), dateOfBirth(bo)               //Member initialise list because 
                                        //of class within a class.
{     
}

//Class: People
void People::printInfo()
{
    cout<<name<<" was born on ";
    dateOfBirth.printDate();
}

//Destructor Class: People
People::~People() {
}

