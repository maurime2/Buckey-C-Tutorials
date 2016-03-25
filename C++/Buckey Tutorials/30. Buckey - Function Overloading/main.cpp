/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 30. Buckey - Function Overloading
 * Created on August 30, 2015, 3:46 PM
 * 
 * Objectives:
 * 01. Use Function Overloading to pass an "int" & a "float" data type function.
 * 02. Create 2 functions that take different parameters (int & float).
 * 
 * Note:    Function Overloading is when you have two function with different 
 *          objects.
 * 
 */
//Libraries
#include <iostream>
using namespace std;

//Global Variables

//Function Prototypes
void printNumber(int );     //Function Overloading: Int
void printNumber(float );  //Function Overloading: Float

//Execute Program
int main() {
    //Declare Variables
    int a = 54;
    float b = 32.4896;
    
    //Call Functions
    printNumber(a);      //calls "int" printNumber function.
    printNumber(b);     //calls "float" printNumber function.
    
    //Exit Stage RIght
    return 0;
}

//Functions
    //printNumber w/int
    void printNumber(int x){
        cout<<"I am using an int!"<<endl;
    }
    
    //printNumber w/float
    void printNumber(float x){
        cout<<"I am using a float!"<<endl;
    }