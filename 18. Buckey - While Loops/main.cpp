/* 
 * File:   main.cpp
 * Author: Mauricio S. Perez
 * Program: 18. Buckey - While Loops
 * Created on August 29, 2015, 11:30 PM
 */

//Libraries
#include <iostream>
using namespace std;

//No Function Prototype

//Execute Program
int main(){
    
    //Declare Variables
    int bacon = 0;
    
    //Loop Starts Declared
    cout<<"Loop Starts at count: "<<bacon<<endl<<endl;
    
    //While Loop
    while(bacon <= 5){
        cout<<"bacon is "<<bacon<<endl;
        bacon = bacon + 1;
    }
    
    //Loop end
    cout<<endl<<"Loop Ends after "<<bacon<<" Itterations!"<<endl;
    
    //Exit Stage Right
    return 0;
}

