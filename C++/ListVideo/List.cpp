//Libraries
#include <cstdlib>
#include <iostream>

#include "List.h"

using namespace std;


List::List(){
    head = NULL;        //Private Data Members
    curr = NULL;       //Set to Null
    temp = NULL;      //
}

void List::AddNode(int addData){
    nodePtr n = new node;       //Same as node*
    n->next = NULL;     //Last NOde in the list:
                        //Find the node n is pointing to, 
                        //access its next element, point to nothing
    n->data = addData;  //Fill node with data
    
    if(head!= NULL){    //If List Is Already Created
        curr = head;
        while(curr->next != NULL){
            curr = curr->next;
        }//End WHile Loop
        curr->next = n;
    }
    else{
        head = n;
    }    
}

void List::DeleteNode(int delData){
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while((curr != NULL) && (curr->data != delData)){
        temp = curr;
        curr = curr->next;
    }//end while loop
    if(curr == NULL){
        cout << delData << "Was not in the list!\n";
        delete delPtr;
    }
    else{
        delPtr = curr;
        curr=curr->next;
        temp->next = curr;
        if(delPtr== head){
            head = head->next;
            temp = NULL;
        }
        delete delPtr;
        cout<<"The value "<<delData<<"was Deleted!\n";
        
    }
}

void List::PrintList(){
    curr = head;
    while(curr != NULL){
        cout<<curr->data<<endl;
        curr = curr->next;
    }
}