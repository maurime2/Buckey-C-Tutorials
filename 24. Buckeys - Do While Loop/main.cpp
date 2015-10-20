/* 
 * File:   main.cpp
 * Author: Mauricio S. Perez
 * Program: 24. Buckeys - Do While Loop
 * Created on August 30, 2015, 2:31 PM
 * 
 * Objectives:
 * 01. Use Do WHile Loop
 * 02.
 * 03.
 */

//Libraries
#include <iostream>
using namespace std;

//No Function Prototype

//Execute Program
int main() {

    //Declare VAriables
    int x =1;
    
    //Do WhIle Loop
    do{                  //Loop WIll Run at least one time before the test.
        //Prompt        //Will Print out [1,2,3...8,9]. At x=10, loop will exit.
        cout<<x<<endl;
        x++;
    }while(x<10);
    
    //Exit Stage Right
    return 0;
}