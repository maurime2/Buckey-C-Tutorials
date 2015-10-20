/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Program: 20. Buckeys - Assignment and Increment Operators
 * Created on August 30, 2015, 12:05 AM
 * 
 * Objectives:
 * 01. Assignment Operators
 * 02. Increment Operators
 */

//Libraries
#include <iostream>
using namespace std;

//No Function Prototype

//Execute Program
int main() {
    
    //Declare Variables
    int x = 10;
    int y = 20;
    int z = 30;
    int a = 40;
    int b = 10;
    
    //Prompt User about Variables
    cout<<"z,y,z,a,b all equal [10,20,30,40,10] respectively."<<endl<<endl;
    
//OPPERATORS
    
                //Increment "x" by 10;
                cout<<"Add "<<x<<" by 10: ";
                x = x + 10;
                //output x
                cout<<x<<endl<<endl;;

                //Subtract "y" by 5;
                cout<<"Subtract "<<y<<" by 5: ";
                y -= 5;
                //output y
                cout<<y<<endl<<endl;

                //Multiply "z" by 5;
                cout<<"Multiply "<<z<<" by 5: ";
                z *= 5;
                //output y
                cout<<z<<endl<<endl;    

                //Divide "a" by 2;
                cout<<"Divide "<<a<<" by 2: ";
                a /= 2;
                //output y
                cout<<a<<endl<<endl;

                //Modulus "a" by 2;
                cout<<"Modulus "<<b<<" by 3: ";
                b %= 3;
                //output y
                cout<<b<<endl<<endl;

                //Increment Operator: Before Statement 
                cout<<"Before Statement Example: "<<a<<". ";
                cout<<"++a: "<<++a<<endl;
                cout<<"Final: "<<a<<endl<<endl;
                
                //Increment Operator: After Statement 
                cout<<"After Statement Example: "<<x<<". ";
                cout<<"x++: "<<x++<<endl;
                cout<<"Final: "<<x<<endl<<endl;    
    
    
    //Exit Stage RIght
    return 0;
}

