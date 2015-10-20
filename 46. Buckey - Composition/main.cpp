/* 
 * File:   main.cpp
 * Author: Dell
 *
 * Created on October 20, 2015, 1:37 PM
 */
//Libraries
#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

//Function Prototypes

//Global Variables

//Main Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    Birthday birthObj(12,28,1986);                       //Create birthday Object w/ variables
    People buckeyRoberts("Buckey the King", birthObj);  //Create people object 
    buckeyRoberts.printInfo();                         //prints people


    //Mauricio S. Perez
    Birthday birthObj2(10,17,1986);                       //Create birthday Object w/ variables
    People MSP("Mauricio S. Perez", birthObj2);  //Create people object 
    MSP.printInfo();                         //prints people
    
    //Call One Last Time
    buckeyRoberts.printInfo(); 
    
    //Exit Stage Right
    return 0;
}

