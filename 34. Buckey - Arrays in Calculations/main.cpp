/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 34. Buckey - Arrays in Calculations
 * Created on August 30, 2015, 6:22 PM
 * 
 * Objectives:
 * 
 * 01.
 * 02.
 * 03.
 * 04.
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
    int SIZE = 5;
    int tuna[SIZE] = {20,54,76,832,546};
    int sum = 0;
    
    //Sum of all array initialiser list in array "tuna"
    for(int x = 0; x<5; x++){
        sum += tuna[x];
        cout<<sum<<endl;
    }
    
    //Exit Stage Right
    return 0;
}

//Functions