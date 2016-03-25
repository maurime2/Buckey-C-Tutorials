/* 
 * File:   main.cpp
 * Author: Mauricio S. Perez
 * Program: Constructors
 * Created on August 29, 2015, 2:55 PM
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
        
        //Constructor
        BuckeysClass(string z){ //Constructor always the same as the class name.
                               //*Constructors never have a return type.
                              //*Usualy to assign values to variables.
            cout<<"This will get printed automagicaly"<<endl;
            setName(z);
            cout<<"End of Public Constructor: "<<z<<endl<<endl;
        }
        
        //Function
        void setName(string x){ //Function that sets string "x" to "name"
            name = x;
            cout<<"x in SetName: "<<x<<endl;
        }
        
        //Set Name
        string getName(){
            cout<<"In Get name: "<<name<<endl<<endl;
            return name;        //Returns Name
        }
            
    //Access Specifier
    private:                 //anything after this is "private" use
        string name;
};


//Execute Program
int main() {
    
    // Declare Object - to access class functions -    
    BuckeysClass bo("Lucky Bucky Roberts");     //Object bo = Buckeys Object. Used to access Function
                        //"coolSyaing" in BuckeysClass
    
    BuckeysClass bo2("Sally McSalad");     //Object bo = Buckeys Object. Used to access Function
                        //"coolSyaing" in BuckeysClass
    
    
    //Call Function
    bo.setName("Sir Bucky Wallace");      //Calls Function in Class to set 
                                         //"Sir Bucky Wallace" into
                                        //Private Variable "name".
    //Print Name
    cout<<endl<<"The FInal Result: bo"<<endl;
    cout<<bo.getName()<<endl<<endl;          //Calls "getName" function in Class.
    cout<<endl<<"The FInal Result: bo2"<<endl;
    cout<<bo2.getName()<<endl<<endl;          //Calls "getName" function in Class.
    //Exit Stage Right
    return 0;
}