/* 
 * File:   Birthday.cpp
 * Author: Dell
 * 
 * Created on October 20, 2015, 1:44 PM
 */

//libraries
#include "Birthday.h"
#include <iostream>
using namespace std;

//Birthday Class: Birthday
Birthday::Birthday(int m, int d, int y) 
{
    month = m;
    day = d;
    year = y;
}
//Birthday Class: printDate
void Birthday::printDate(){
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}

//Birthday Destructor
Birthday::~Birthday() {
}

