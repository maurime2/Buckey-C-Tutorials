/* 
 * File:   Birthday.h
 * Author: Dell
 *
 * Created on October 20, 2015, 1:44 PM
 */

#ifndef BIRTHDAY_H
#define	BIRTHDAY_H

//libraries

//Class
class Birthday {
public:
    Birthday(int m, int d, int y);                       //Birthday Class
    void printDate();                   //Prints Birthday
    
    //Destructor Prototype
    virtual ~Birthday();            //Birthday Destructor
private:
    //Private Variables
    int month;          //3 Variables
    int day;
    int year;

};

#endif	/* BIRTHDAY_H */