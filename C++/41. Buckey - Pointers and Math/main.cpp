/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Program: 41. Buckey - Pointers and Math
 * Created on August 30, 2015, 10:14 PM
 * 
 * Objectives:
 * 
 * 01. Pointer
 * 02. Using Math with pointers
 * 03. Add integers to pointers & why result is interesting
 *
 * 
 */
//Libraries
#include <iostream>
using namespace std;

//Global Variables

//Function Prototypes

//Execute Program
int main() {
    //Declare Variables
    int buckey[5];
    int *bp0 = &buckey[0];
    int *bp1 = &buckey[1];
    int *bp2 = &buckey[2];
    int *bp3 = &buckey[3];
    int *bp4 = &buckey[4];
    int *bp5 = &buckey[5];
    int *bp6 = &buckey[6];
    
    //Print Memory Locations
    cout<<"bp0 is at: "<<bp0<<endl;
    cout<<"bp1 is at: "<<bp1<<endl;
    cout<<"bp2 is at: "<<bp2<<endl;
    cout<<"bp3 is at: "<<bp3<<endl;
    cout<<"bp4 is at: "<<bp4<<endl;
    cout<<"bp5 is at: "<<bp5<<endl;
    cout<<"bp6 is at: "<<bp6<<endl;
    
    
    //Alter Pointer
    bp0 += 2;   //add 2 to bp0.     *THIS CHANGES TO @ ELEMENTS AFTER bp0 = bp2
    cout<<endl<<"bp0 is now at: "<<bp0<<endl;
    
    //Exit Stage Right
    return 0;
}

//Functions