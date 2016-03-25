/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 26. Buckeys - Logical Operators
 * Created on August 30, 2015, 2:48 PM
 * 
 * Objectives:
 * 01. Logical Operators.
 * 02. AND (&&), OR (||) statements.
 * 03. 
 * 
 */

//Libraries
#include <iostream>
using namespace std;

//No Function Prototypes

//Execute Program
int main() {
    //Declare Variables
    int age = 21;
    int money = 650;
    
    //Input Age
    cout<<"How old are you? ";
    cin>>age;

    //Input Money
    cout<<"How much money do you have? $";
    cin>>money;
    
    //If statement w/ Logical Operator
    if((age>=21 && money>=500) || (money>=500 || age>18)){
        cout<<"you are allowed in!!!"<<endl;
    
    }
    else{
        cout<<"you are not allowed in...";
    }
    
    
    
    //Exit Stage RIght
    return 0;
}

