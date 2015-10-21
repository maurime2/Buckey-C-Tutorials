/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Program: 33. Buckey - Array using Loops
 * Created on August 30, 2015, 6:14 PM
 * 
 * Objectives:
 * 
 * 01. Create an Array using Loops
 * 02.
 * 03.
 * 
 */
//Libraries
#include <iostream>
using namespace std;

//Execute Program
int main() {
    //Declare Variables
    int SIZE = 9;       //Size of Array.
    int buckey[SIZE];     //Array "buckey".
    
    //Prompt Elements and Values Column.
    cout<<"Element   -   Value"<<endl;
    
    //For Loop - FIlls each element of array to 99
    for(int x = 0; x<=8;x++){
        buckey[x] = 99;
        
        //Print New Element
        cout<<x<<"   ------     "<< buckey[x]<<endl;
    }

    //Exit Stage RIght
    return 0;
}

//Functions