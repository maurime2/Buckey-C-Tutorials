/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 11. Buckey - Function that use Multiple Parameters
 * Created on August 29, 2015, 2:05 PM
 */

//libraries
#include <iostream>
using namespace std;

//Declare Function Prototype
int addNumbers(int, int);       //Declared Function Prototype to use Later.

//Execute Program
int main() {
   
    //Declare Variables
    int x = 30;                 //Integer that will be used as Parameter
    int y = 31;                 //Integer that will be used as Parameter
    
    //Call Function
    cout<<addNumbers(x,y);      //Function Called with Parameter x and y
    
    //Exit Stage Right
    return 0;
}

//Function
int addNumbers(int x, int y){
    int answer = x+y;           //Adds integers x and y
    return answer;              //Returns "answer"
}