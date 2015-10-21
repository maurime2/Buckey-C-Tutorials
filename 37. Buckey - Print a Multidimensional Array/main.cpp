/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Program: 37. Buckey - Print a Multidimensional Array 
 * Created on August 30, 2015, 6:48 PM
 * 
 * Objectives:
 * 01. Print a Multidimensional Array
 * 02. Use indexing to Print Array
 * 03.
 */
//Libraries
#include <iostream>
using namespace std;


//Execute Program
int main() {
    //Declare Variables
    int bertha[2][3] = {{1,2,3},{7,8,9}}; //2 Dimensional Array with 3 Elements.
                                         //with 2 array initialiser lists. 
    //Loops through Rows (0-1))
    for(int row = 0; row<2; row++){                 //Part 1 starts the row.
        
        //Print row Start
        cout<<"Row "<<row<<": ";
        
        //Loops Through Elements in ROW (0-2))    //Part 2 prints the elements
        for(int column=0; column<3;column++){    //in the row.
            //Prints Elements in Row
            cout<<bertha[row][column]<<", ";
        }
            //New Line when Row COMPLETES PRINTING
            cout<<endl;
    }
    
    //Exit Stage RIght
    return 0;
}

