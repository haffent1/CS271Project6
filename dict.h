#ifndef DIC_H         
#define DIC_H         

#include <iostream>
#include "BST.h"

//note that the constructor of a dict should just call the BST constructors
// most of the functions here are going to be  one line functions that just call BST 

class Movie                                                     
{                                                               
    public:                                                     
                                                                
                                                                
        Movie(){ // this is an inline definition                
            title = NULL;
            actors = NULL;

        }                                                   

                                                                
    Private:
        string title;
        string actors;   // this will be an array of actors in the film

                                                                
                                                                
} // end of Movie
                                                                

template<class KeyType>
class Dictionary
 
{                                                           
    public:

        Dictionary() : BST<KeyType>() {}   // inline default?
        ~Dictionary();  // destructor 

        using BST<KeyType>:: insert;
        using BST<KeyType>:: remove;
        using BST<KeyType>:: get;
        using BST<KeyType>:: length;
        

}                                                           
                                                            
                                                            





#include "BST.cpp"


//this is a copy of the inclass notes
// I need to move this into the insert in BST.cpp
/*
Dictionary ADT:                                                                 
    (key,value) pairs                                                           
    search for value based off of key
                                                                                
insert(data)                                                                    
    //we also need to check if the key already exists and see if we want to replace value or throw error
    current=root;                                                               
    parent=NULL;                                                                
    while(?)                                                                    
        parent=current                                                          
        if (data < current.data){                                               
            current=current.left;                                               
        }                                                                       
        else{                                                                   
            current = current.right;                                            
        }                                                                       
    newnode*= new Node(data); //assuming that the default constructors are setting value to null
    newNode.parent=parent;                                                      
                                                                                
    if (parent==null){ //we need to check this before the next if statment to prevent segfault
        root=newNode;                                                           
    }                                                                           
    else if (data <= parent.data){ // if we were inserting for the item, this would cause a seg fault
        parent.left=new node;                                                   
    }                                                                           
    else{                                                                       
        parent.right=newNode;                                                   
    }                                                                           

*/


#endif

