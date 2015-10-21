/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 32. Buckey - Arrays
 * Created on August 30, 2015, 6:01 PM
 * 
 * Objectives:
 * 
 * 01. Declare An Array.
 * 02. Observe the indexing of array begins at "0"
 * 03. Use an Array Index, and Array Size to declare your array.
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
    int SIZE = 5;            //Array Size
    int aIndex = 0;         //Array Index
    int buckey[SIZE] = {66,75,2,43,99};     //Array "buckey" w/ size SIZE
                                           //{array initialiser list}
                                          //with array elements: 66,75,2,43,99.
    
    //Call out index
    cout<<"what index would you like to call: ";
    cin>>aIndex;
    
    
    //Print out values in array "buckey".
    cout<<"Value in array Buckey @ index "<<aIndex<<" is: "<<buckey[aIndex]<<endl;                      
                                        //calls buckey with array index [3].
    
    //Exit Stage Right
    return 0;
}

//Functions