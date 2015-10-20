/* 
 * File:    main.cpp
 * Author:  Mauricio S. Perez
 * Program: 46.47. Buckey - Composition
 * Created on October 20, 2015, 2:51 PM
 * 
 * Objectives: Learn Friends
 * 
 * 01.  
 * 02.
 * 03.
 * 
 */
//Libraries
#include <iostream>
using namespace std;

//Function Prototypes

//Global Variables

//Class StankFist
class StankFist{
    public:
        StankFist(){stinkyVar=0;}
    private:
        int stinkyVar;

        //Function Friend needs to be prototyped in class...
        friend void stinkysFriend(StankFist &sfo);     //StankFist Object sfo as a Parameter.
};

void stinkysFriend(StankFist &sfo){
    sfo.stinkyVar=99;
    cout<<sfo.stinkyVar<<endl;
}
//Main Starts Hear
int main(int argc, char** argv) {
    
    //Declare variables
    StankFist bob;          //StankFist Object.
    stinkysFriend(bob);     //Use function stinkysFriend using bob as parameter.
    
    
    //Exit Stage Right
    return 0;
}

