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

        Node()//default 
        {                                                                       
            value= NULL;
            parent = NULL;
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
   BST<KeyType>& operator=(const BST<KeyType>& bst) const;
   void destroy();
   void destroyR(Node<KeyType>* node);

   KeyType* successor(const KeyType& k) const;   // return the successor of k
   KeyType* predecessor(const KeyType& k) const; // return the predecessor of kstd::string in


   bool empty() const;                           // return true if empty; false o/w
   KeyType* get(const KeyType& k) const;         // return first item with key equal to k
   void insert(KeyType *k);                      // insert k into the tree
   
   void remove(const KeyType& k);                // delete first item with key equal to k

   KeyType *maximum() const;                     // return the maximum item
   KeyType *minimum()const ;                     // return the minimum item


   std::string inOrder() const;              // return string of items from an inorder traversalstd::string pre
   std::string preOrder() const;             // return string of items from a preorder traversal
   std::string postOrder() const;            // return string of items from a postorder traversal
       
   
//private:
protected:

//friend class Dictionary<KeyType>;

   Node<KeyType>* root;
   int length;

   Node<KeyType>* getR(Node<KeyType>* node,const KeyType& k) const;         // return first item with key equal to ko
   Node<KeyType>* getNode(const KeyType& k) const;         // return first item with key equal to k BUT the node and not the value
   
    
    

   void copy(const BST<KeyType> &bst); // not that in this format means that it is not going to modify any values in the class
   void copyR( Node<KeyType>* parentNode, Node<KeyType>* node, const Node<KeyType>* oldNode) const; // not that in this format means that it is not going to modify any values in the class

   std:: string inOrderR(Node<KeyType>* currentNode, std::stringstream& ss) const;              // return string of items from an inorder traversalstd::string pre
   std:: string preOrderR(Node<KeyType>* currentNode, std::stringstream& ss) const;             // return string of items from a preorder traversal
   std:: string postOrderR(Node<KeyType>* currentNode, std::stringstream& ss) const;            // return string of items from a postorder traversal


   friend void testBSTCopy();  

};
   template <class KeyType>
   std:: ostream& operator<<(std::ostream& stream, const BST<KeyType>& bst) ;
   class FullError {};    // MinPriorityQueue full exception                      
   class EmptyError {};   // MinPriorityQueue empty exception                     
   class KeyError {};     // MinPriorityQueue key exception                       
                                                                               

#include "BST.cpp" // add this in once the .cpp is written
#endif

