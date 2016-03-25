/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Program: 35. Buckey - Passing Arrays to Functions
 * Created on August 30, 2015, 6:28 PM
 * 
 * Objectives:
 * 01. Passing Arrays to Function
 * 02.
 * 03.
 * 04.
 * 
 */
//Libraries
#include <iostream>
using namespace std;

//No Global Variables

//Function Prototypes
void printArray(int [], int);

//Execute Program
int main() {
    //Declare Variables
    int SIZE = 6;                             //Size of array
    int buckey[SIZE-3] = {20,54,675};        //{array initialiser list} size 3
    int jessica[SIZE] = {54,24,7,8,9,99};   //{array initialiser list} size 6

    //Print "buckey" Array               //Calls printArray function with array
    printArray(buckey, SIZE-3);         // & size 3. DO NOT USE [] so as to pass
                                       // the entiere array.
    
    //Print "jessica" Array          //Calls printArray function with array &
    printArray(jessica, SIZE);      // size 6 DO NOT USE [] so as to pass
                                   // the entiere array.
    
    //Exit Stage Right
    return 0;
}

//Functions
    void printArray(int theArray[], int sizeOfArray){

        //
        for(int x = 0; x<sizeOfArray; x++){
            cout<<theArray[x]<<endl;
        }

        //end Print Array
        cout<<endl;
    }