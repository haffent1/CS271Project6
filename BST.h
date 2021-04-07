#ifndef BST_H     
#define BST_H     

#include <iostream>




template <class KeyType>                                                        
class Node                                                                      
{                                                                               
    public:                                                                     
        KeyType *value;                                                          
        Node<KeyType> *parent;                                                    
        Node<KeyType> *left; 
        Node<KeyType> *right;                                                    
                                                                                
        Node(KeyType *item)                                                      
        {                                                                       
            value= item;
            parent = NULL ;
            left = NULL; 
            right = NULL;
        }                                                                       
};                                                                              

template <class KeyType>
class BST
{
public:
    BST(); //default 
    BST(const BST<KeyType>& bts); //copy NOT WRITTEN
    ~BST(); //destructor NOT WRITTEN
    //needs assignment operator

    bool empty() const;                           // return true if empty; false o/w
    KeyType* get(const KeyType& k) const;         // return first item with key equal to k
    void insert(KeyType *k);                      // insert k into the tree
    /*
    void remove(const KeyType& k);                // delete first item with key equal to k
    */
    KeyType *maximum() const;                     // return the maximum item
    KeyType *minimum()const ;                     // return the minimum item
    /*
    KeyType *successor(const KeyType& k) const;   // return the successor of k
    KeyType *predecessor(const KeyType& k) const; // return the predecessor of kstd::string in
    std::string inOrder() const;              // return string of items from an inorder traversalstd::string pre
    std::preOrder() const;             // return string of items from a preorder traversal
    std::string postOrder() const;            // return string of items from a postorder traversal
    */

private:

   Node<KeyType>* getR(Node<KeyType>* node,const KeyType& k) const;         // return first item with key equal to k
   Node<KeyType>* root;
   int length;

};

#include "BST.cpp" // add this in once the .cpp is written
#endif

