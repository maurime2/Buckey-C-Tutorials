/* 
 * File:   People.h
 * Author: Dell
 *
 * Created on October 20, 2015, 1:46 PM
 */

#ifndef PEOPLE_H
#define	PEOPLE_H

//libraries
#include <string>
#include "Birthday.h"
using namespace std;

//Class Prototype: People
class People {
public:
    People(string x, Birthday bo);  //constructor x, birthday object.
    void printInfo();
    
    
    //Destructor Prototype: People
    virtual ~People();
private:
    string name;
    Birthday dateOfBirth;   //Object: dateOf Birth
};

#endif	/* PEOPLE_H */

