/* 
 * File:    main.cpp
 * Author:  Mauricio S. Perez
 * Program: 55. Buckey - Intro to Polymorphism
 * Created on October 20, 2015, 4:38 PM
 * 
 * Objectives: Learn Polymorphism
 * 
 * 01.  Learn Polymorphism
 * 
 */
//Libraries
#include <iostream>
using namespace std;

//Function Prototypes

//Global Variables

//Class
class Enemy{
protected:
        int attackPower;
public:
    void setAttackPower(int a){
        attackPower=a;
    }

};

class Ninja: public Enemy{
public:
    void attack()
    {cout<<"I am a ninja, ninja Chop! -"<<attackPower<<endl;}
};

class Monster: public Enemy{
public:
    void attack()
    {cout<<"monster must eat you!!! -"<<attackPower<<endl;}

};


//Main Start Here
int main(int argc, char** argv) {
    //Declare Variables
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->setAttackPower(29);
    enemy2->setAttackPower(99);
    n.attack();
    m.attack();
            
    //Exit Stage Right
    return 0;
}

