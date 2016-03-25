/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 20. Buckeys - Sentinel Controlled Program
 * Created on August 29, 2015, 11:49 PM
 * 
 * Objectives:
 * 01. Use a Sentinel to control a While Loop.
 * 02. While Loop will add the sum of the ages inputed by user.
 * 03. Prompt the average of all the ages to the user.
 */

//Libraries
#include <iostream>
using namespace std;

//No Function Prototype

//Execute Program
int main() {
    //Declare Variables
    int age = 0;                      //Temporarily Stores Age input by User.
    int ageTotal = 0;                //Holds Total Age Sum of all users;
    int numberOfPeopleEntered = 0;  //Holds the number of people entered.
    
    //Prompt
    cout<<"Enter First Persons Age or -1 to quit"<<endl;
    cin>>age;
    
    //Loop
    while(age != -1){
        ageTotal = ageTotal + age;
        numberOfPeopleEntered++;
        
        //Prompt Next Persons Age
        cout<<"Enter Next Persons Age or -1 to quit"<<endl;
        cin>>age;
    }
    
    //Calculate Age
    cout<<"Number of people Entered: "<<numberOfPeopleEntered<<endl;
    cout<<"Average Age: "<<ageTotal/numberOfPeopleEntered;
            
            
    //Exit Stage RIght
    return 0;
}

