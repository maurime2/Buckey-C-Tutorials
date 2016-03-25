/* 
 * File:   List.h
 * Author: Mauricio S. Perez
 *
 * Created on November 18, 2015, 2:12 PM
 */

#ifndef LIST_H
#define	LIST_H

//Class
class List{

private:
    typedef struct node{
        int data;//Data Members
        node* next; //Pointer that can point to next node in list
    }* nodePtr;     //typedef struct node* nodePtr;       //prefix to creating node pointer
    
                    
    nodePtr head;                       //node* head; //Insted thanks to line above
    nodePtr curr;                       
    nodePtr temp;
    
public: //This is where the functions go
    List();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void PrintList();
};

#endif	/* LIST_H */

