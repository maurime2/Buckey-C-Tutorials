/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Program: 25. Buckeys - Switch Statements 
 * Created on August 30, 2015, 2:38 PM
 * 
 * Objectives:
 * 
 * 01. Learn Switch Statements
 * 02. Use Break to end loop
 * 03.
 * 
 */

//Libraries
#include <iostream>
using namespace std;

//No Function Prototype

//Execute Program
int main() {
    //Declare Variables
    int age = 21;
    
    //Prompt Age
    cout<<"Type your age: ";
    cin>>age;
    
    //Switch Statement
    switch(age){

        //age == 16
        case 16:
            cout << "Hey you can drive now!"<<endl;
            break;                                  //Break ends Switch

        //age == 18
        case 18:
            cout << "Go Buy some lotto tickets!"<<endl;
            break;                                  //Break ends Switch

        //age == 21
        case 21:
            cout << "Buy me some Beer!"<<endl;
            break;                                  //Break ends Switch
        
            //age != any of the cases above
        default:
            cout<<"Sorry, you get nothing..."<<endl;
                                                    //No Break, no matches.
    }
    
    
     //Exit Stage RIght
    return 0;
}

