/* 
 * File:   Sally.h
 * Author: Mauricio S. Perez
 *
 * Created on August 31, 2015, 9:04 AM
 */

#ifndef SALLY_H
#define	SALLY_H

class Sally {
public:
    Sally(int a, int b);
    void print();
    
    
    
    virtual ~Sally();
private:
    int regVar;              //private int
    const int constVar;     //

};

#endif	/* SALLY_H */

