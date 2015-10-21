/* 
 * File:   Daughter.cpp
 * Author: Dell
 * 
 * Created on October 20, 2015, 3:50 PM
 */

//Libraries
#include <iostream>
#include "Mother.h"
#include "Daughter.h"
using namespace std;

void Daughter::doSomething(){
    publicv = 1;
    protectedv = 2;
   // privatev = 3; //CANNOT DO THIS, DAUGHTER CANNOT INHERIT PRIVATE STUFF.
}