/* 
 * File:   Daughter.h
 * Author: Dell
 *
 * Created on October 20, 2015, 3:50 PM
 * Purpose: DERIVED CLASS
 */

#ifndef DAUGHTER_H
#define	DAUGHTER_H

class Daughter : public Mother//Inherit by writing colon, followed by the class. 
{                            //Only gets public and protected, not private.
public:
    void doSomething();
private:

};

#endif	/* DAUGHTER_H */