/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 12. Buckey - Classes and Objects
 * Created on August 29, 2015, 2:13 PM
 */

//libraries
#include <iostream>
using namespace std;

//No Function Prototype

//Declare Class
class BuckeysClass{

    //Access Specifier
    public:                 //anything after this is "public" use
        //Function
        void coolSaying(){              //This class Prints text
            cout<<"Preaching to the Choir"<<endl;
        }
};


//Execute Program
int main() {
    // Declare Object               //Object "buckeysObject" used to access 
    BuckeysClass buckeysObject;     //function "coolSyaing" in BuckeysClass

    //Call Class
    buckeysObject.coolSaying();     //uses buckeysObject to access cool sayings
                                    //function
    //Exit Stage Right
    return 0;
}

