/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Program: 40. Buckey - sizeof Function
 * Created on August 30, 2015, 9:40 PM
 */
//Libraries
#include <iostream>
using namespace std;

//Global Variables

//Function Prototypes

//Execute Program
int main() {
    //Declare Variables
    char c;
    double d;
    double buckey[10];
    int i;
    float f;
    long l;
    
    //Print out sizeof char c.
    cout<<"Size of char c  : "<<sizeof(c)<<" bytes"<<endl;              //Size of Char
    cout<<"Size of double d: "<<sizeof(d)<<" bytes"<<endl;              //Size of Double
    cout<<"Size of double buckey[10]: "<<sizeof(buckey)<<" bytes"<<endl;//Size of Double
    cout<<"Size of double buckey / by one Size of element buckey[0]: "; //Size if Double
    cout<<sizeof(buckey)/sizeof(buckey[0])<<" Elements"<<endl<<endl;
    
    //Other Sizes
    cout<<"Size of int i  : "<<sizeof(i)<<" bytes"<<endl;
    cout<<"Size of float f: "<<sizeof(f)<<" bytes"<<endl;
    cout<<"Size of long l : "<<sizeof(l)<<" bytes"<<endl;
    //Exit Stage Left
    return 0;
}

