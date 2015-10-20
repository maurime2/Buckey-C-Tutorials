/* 
 * File:   Mother.h
 * Author: Dell
 *
 * Created on October 20, 2015, 3:50 PM
 * Purpose: BASE CLASS
 */

#ifndef MOTHER_H
#define	MOTHER_H

class Mother {
    public:
        int publicv;
    protected:      //Anything inside the class, any friend has access to it, 
        int protectedv;           //base classes
                                 //Derived class has access to it.
    private:
        int privatev;
};

#endif	/* MOTHER_H */

