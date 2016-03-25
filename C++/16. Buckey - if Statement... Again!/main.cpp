/* 
 * File:    main.cpp
 * Author : Mauricio S. Perez
 * Program: 16. Buckey - if Statement... Again!
 * Created on August 29, 2015, 11:02 PM
 */

//libraries
#include <iostream>
using namespace std;

//No Function Prototype

//Declare Class

//Execute Program
int main() {

    //Declare Variables
    int x = 10;
    int y = 43;
    
    //If Statement w/ Comparison opperators
    cout<<"The Following are if statements w/ Comparison opperators:"<<endl<<endl;
    
    //Equal:(==) 
    cout<<"Is "<<x<<" equal to "<<y<<"?"<<endl; 
    if(x==y){    // Equal:(==), Not Equal, Not Equal:(!=), Less than or Eq:(<=),
                // Greater than or Eq:(>=), Less than:(<), Greater Than:(>))
        cout<<"YES OT IS!!!"<<endl<<endl;
    }
    else{
        cout<<"No its not..."<<endl<<endl;
    }
    
    //Not Equal:(!=)
    cout<<"Is "<<x<<" Not Equal to "<<y<<"?"<<endl; 
    if(x!=y){    // Equal:(==), Not Equal:(!=), Less than or Eq:(<=),
                // Greater than or Eq:(>=), Less than:(<), Greater Than:(>))
        cout<<"YES OT IS!!!"<<endl<<endl;
    }
    else{
        cout<<"No its not..."<<endl<<endl;
    }

    //Less Than or Equal:(<=)
    cout<<"Is "<<x<<" Less Than or Equal to "<<y<<"?"<<endl; 
    if(x<=y){    // Equal:(==), Not Equal:(!=), Less than or Eq:(<=),
                // Greater than or Eq:(>=), Less than:(<), Greater Than:(>))
        cout<<"YES OT IS!!!"<<endl<<endl;
    }
    else{
        cout<<"No its not..."<<endl<<endl;
    }

    //Greater Than or Equal:(>=)
    cout<<"Is "<<x<<" Greater Than or Equal to "<<y<<"?"<<endl; 
    if(x>=y){    // Equal:(==), Not Equal:(!=), Less than or Eq:(<=),
                // Greater Than or Eq:(>=), Less Than:(<), Greater Than:(>))
        cout<<"YES OT IS!!!"<<endl<<endl;
    }
    else{
        cout<<"No its not..."<<endl<<endl;
    }

    //Less Than:(<)
    cout<<"Is "<<x<<" Less Than "<<y<<"?"<<endl; 
    if(x<y){     // Equal:(==), Not Equal:(!=), Less than or Eq:(<=),
                // Greater Than or Eq:(>=), Less Than:(<), Greater Than:(>))
        cout<<"YES OT IS!!!"<<endl<<endl;
    }
    else{
        cout<<"No its not..."<<endl<<endl;
    }

    //Greater Than:(>)
    cout<<"Is "<<x<<" Greater Than "<<y<<"?"<<endl; 
    if(x>y){     // Equal:(==), Not Equal:(!=), Less than or Eq:(<=),
                // Greater Than or Eq:(>=), Less Than:(<), Greater Than:(>))
        cout<<"YES OT IS!!!"<<endl<<endl;
    }
    else{
        cout<<"No its not..."<<endl<<endl;
    }

    return 0;
}

