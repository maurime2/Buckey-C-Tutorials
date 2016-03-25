/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 17. Buckey - If Else statement
 * Created on August 29, 2015, 11:21 PM
 */
//Libraries
#include <iostream>
using namespace std;

//No Function Prototype

//Execute Program
int main(){

    //Declare Variables
    int age = 60;
    
    //If else statement
    if(age>60){                        //If age is greater than 60, if will run.
        cout<<"Wow you are OLD!"<<endl;
        if(age>100){                  //Nested If Statement
            cout<<"Why are you still alive?"<<endl;
        }
        else{
            cout<<"You must be between 61 & 100"<<endl;
        }
    }
    else{
        cout<<"You are young, get a job!!!"<<endl;
    }
    
    return 0;
}

