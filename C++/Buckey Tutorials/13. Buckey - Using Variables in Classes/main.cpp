/* 
 * File:   main.cpp
 * Author : Mauricio S. Perez
 * Program: 13. Buckey - Using Variables in Classes
 * Created on August 29, 2015, 2:51 PM
 */

//libraries
#include <iostream>
#include <string>
using namespace std;

//No Function Prototype

//Declare Class
class BuckeysClass{

    //Access Specifier
    public:                 //anything after this is "public" use     
        //Function
        void setName(string x){ //Function that sets string "x" to "name"
            name = x;
        }
        //Set Name
        string getName(){
            return name;        //Returns Name
        }
            
    //Access Specifier
    private:                 //anything after this is "private" use
        string name;
};


//Execute Program
int main() {
    
    // Declare Object     
    BuckeysClass bo;     //Object bo = Buckeys Object. Used to access Function
                        //"coolSyaing" in BuckeysClass
    
    //Call Function
    bo.setName("Sir Bucky Wallace");      //Calls Function in Class to set 
                                         //"Sir Bucky Wallace" into
                                        //Private Variable "name".
    //Print Name
    cout<<bo.getName();          //Calls "getName" function in Class. 

    //Exit Stage Right
    return 0;
}

