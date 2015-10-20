/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Program: 31. Buckey - Recursion
 * Created on August 30, 2015, 3:58 PM
 * 
 * Objectives:
 * 
 * 01. Learn Recursion: A function that calls itself....
 * 02. Use A base Case (Ending Point) for your function. 
 * 03. 
 * 
 */
//Libraries
#include <iostream>
using namespace std;

//Global Variables

//Function Prototypes
void bucky();
float factorialFinder(float);

//Execute Program
int main() {
    //Declare Variables
    float x=0;            //Factorial to be expressed
    
    //Prompt User for Factorial
    cout<<"Enter value you wish to know its factorial: ";
    cin>>x;
    
    //Prompt Calculation
    cout<<x<<"! = ";

    //Call Function
    //bucky();
    cout<<factorialFinder(x)<<endl;
    
    //Exit Stage Right
    return 0;
}

//Functions
    //Void Buckey
    void bucky(){
        cout<<"OMGWTFBBQ!!!"<<endl;
    }
    
    float factorialFinder(float x){

        //Check if x is o of less
        if(x<=0){
        cout<<"give a positive value nextime..."<<endl;   
        return 0;
        }
        
        //print value its on
        cout<<x;
        
        //Function Finds Factorial of x
        if(x==1){//Base Case
            //
            //print '='
            cout<<" = ";
            
            //end Recursion
            return 1;
        }
        else{
            //print '*'
            cout<<"*";
                    
            //Call Recursion               //Function will call itself to
            return x*factorialFinder(x-1);//Multiply last value times the next
        }                                //until it reaches 1.
    }