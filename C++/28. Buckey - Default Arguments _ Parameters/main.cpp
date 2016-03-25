/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Program: 28. Buckey - Default Arguments & Parameters
 * Created on August 30, 2015, 3:16 PM
 * 
 * Objectives:
 * 01. Learn to use Default Values in Function Prototypes
 * 02. Defaults can only be declared in Function Prototypes
 * 03. When called, function default will be assigned if no other value passed.
 * 04. 
 * 
 */

//Libraries
#include <iostream>
using namespace std;

//No Global Variables

//Function Prototypes
    int volume(int l=1, int w=1, int h=1);   //Only Declare Defult values Here,
                                            //in Function Prototype.

//Execute Program
int main() {
    //No Declare Variables
    int l=0,w=0,h=0;        //Length Width Height, respectively.
    
    //Prompt user for l,w,h
    cout<<"Give a length: ";
    cin>>l;
    cout<<"Give a width : ";    
    cin>>w;
    cout<<"Give a height: ";    
    cin>>h;
    
    //Call Function Value
    cout<<volume(l);

    //Exit Stage Right
    return 0;
}

//Functions
int volume(int l, int w, int h){
    return l*w*h;
}

