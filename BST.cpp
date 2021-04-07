#include <iostream>

#include <sstream> //string stream                  

//#include "BST.h"
using namespace std;



template <class KeyType>
BST<KeyType>::BST(){
    //cout<<"bst default called"<<endl;
    root = NULL; 
    length = 0;
}

template <class KeyType>
BST<KeyType>::BST(const BST<KeyType>& bst){
}


template <class KeyType>
BST<KeyType>::~BST(){
    /*
    we need to go through each node and delete it
    */
    //delete this;
}
//================
//implement an assignment constructore
//=========================



template <class KeyType>
bool BST<KeyType>:: empty() const{                           // return true if empty; false o/w
    if (root == NULL){
        return true;
    }
    return false;
}//end of empty

//=============================================================================
//=============================================================================
template <class KeyType> //this is the public facing function
KeyType* BST<KeyType>::get(const KeyType& k) const{         // return first item with key equal to k
    Node<KeyType> *node = getR(root, k);
    if (node == NULL)
        return NULL;
    return node->value;
}// end of get

template <class KeyType> // this is the privte facing function  that lets us have the same formate as the one in the book page 290
Node<KeyType>* BST<KeyType>:: getR(Node<KeyType>* node,const KeyType& k) const{         // return first item with key equal to k
    if (node == NULL || k == *(node->value)){
        return node;
    }
    if (k < *(node->value)){
        return getR(node->left,k);
    }
    else{
        return getR(node->right,k);

    }
}
//=======================================================================================
//=============================================================================
template <class KeyType>
void BST<KeyType>::insert(KeyType *k){                      // insert k into the tree
    Node<KeyType>* node = new Node<KeyType>(k);
    Node<KeyType>* y=NULL;
    Node<KeyType>* x = root; //what is the issue with root
    while(x != NULL){
        y=x; // this is the saved parent 
        if ( *(node->value) < *(x->value)){ //down left side of tree if smaller
            x=x->left;
        }
        else{ //down right side if bigger
            x=x->right;
        }
    }
    node->parent = y;
    if( y == NULL){
        root = node; // this needs to be a pointer I belive 
    }
    else if(*(node->value) < *(y->value)){
        y->left = node;

    }
    else{
        y->right = node;
    }
    length=length++;
}

/*
template <class KeyType>
void BST<KeyType>::remove(const KeyType& k){                // delete first item with key equal to k
    Node<KeyType>* node = new Node<KeyType>(k);
    IF((node->left != NULL) && (node->right != NULL)){ // this is the hard case   
        Node<KeyType>* splice= new getR(successor(node->value),node->value); //what type os splice
    }//end of if                                                                
    else{                                                                       
        Node<KeyType>* splice = node;                                                            
    }//end of else                                                              
                                                                                
    if(splice.left != NULL){                                                    
        child=splice.left;                                                      
    }//                                                                         
    else{                                                                       
        child=splice.right;                                                     
    }                                                                           
    if (child != NULL){ /we have to check this because if we refrence a null during assingmnet then we will have a
       // seg fault                                                             
    child.parent=plice.parent; // we have to make sure that this is not null becauase we could cause a segfult
    //also not that the roots parent is null, so we need to check that          
    }                                                                           
    if(splice.parent==NULL){//this is just checking to see if parent is root    
        root=child;                                                             
    }                                                                           
    if (splice == splice.parent.left)                                           
        splice.parent.left=child;                                               
    else{                                                                       
        plice.parent.right=child;                                               
    }                                                                           
    data=node.data; //why are we doing this?                                    
    if( splice != node){ //this is because they might be the same node and thus we we just be reasign the same data
     node.data=splice.data;{ //but we only want to do this if we are splicing out the sucessor
     }                                                                           
     delete splice;                                                              
     return data;                                                                

}

*/
template <class KeyType>
KeyType* BST<KeyType>::maximum() const{                     // return the maximum item
    if (root== NULL){
        return NULL;
    }
    Node<KeyType>* x = root;
    while(x->right != NULL){
        x=x->right;
    }
    return x->value;
}

template <class KeyType>
KeyType* BST<KeyType> :: minimum()const{                     // return the minimum item
    if (root== NULL){
        return NULL;
    }
    Node<KeyType>* x = root;
    while(x->left != NULL ){ // dont I need to derefrce x before doing this
        x=x->left;
    }
    return x->value;
}

template <class KeyType>
KeyType* BST<KeyType> :: successor(const KeyType& k) const{   // return the successor of k
    
    Node<KeyType>* node = getR(root,k);
    if (node == NULL){                                             
        return NULL;                                               
    }                                                              
        else if (node->right != NULL){                                
            
            if (node == NULL){
                return NULL;
            }
            while(node->left != NULL){ // dont I need to derefrce x before doing this
                node=node->left;
            }
            return node->value;
        }//end of copy of min

        else{                                                      
            while(node->parent != NULL && node->parent->right == node){     
                node = node->parent;                                      
                node->parent=node->parent->parent;                              
            }                                                      
            return node->parent->value;                                         
        }                                                          
}//end of sucessor

template <class KeyType>
KeyType* BST<KeyType>:: predecessor(const KeyType& k) const{ // return the predecessor of kstd::string in
    
    
    Node<KeyType>* node = getR(root,k);
    if (node == NULL){                                             
        return NULL;                                               
    }                                                              
        else if (node->left!= NULL){                                
            
            if (node == NULL){
                return NULL;
            }
            while(node->right!= NULL){ // dont I need to derefrce x before doing this
                node=node->right;
            }
            return node->value;
        }//end of copy of min

        else{                                                      
            while(node->parent != NULL && node->parent->left == node){     
                node = node->parent;                                      
                node->parent=node->parent->parent;                              
            }                                                      
            return node->parent->value;                                         
        }                                                          



}


template <class KeyType>
std::string BST<KeyType> :: inOrder() const{              // return string of items from an inorder traversalstd::string pre
    std::stringstream ss;
    Node<KeyType>* currentNode = root;
    if(currentNode == NULL){
        ss<<"[]";
    }
    else{
        ss<<"[";
        inOrderR(currentNode,ss);
    }
    return ss.str();

}


template <class KeyType>
std::string BST<KeyType> :: inOrderR(Node<KeyType>* currentNode, std::stringstream& ss) const{
    if(currentNode != NULL){
        ss<<"[]";
    }
    else{
        inOrderR(currentNode->left);

    }
    return ss.str();
}


template <class KeyType>
std::string BST<KeyType> :: preOrder() const{             // return string of items from a preorder traversal
    std::stringstream ss;
    Node<KeyType>* currentNode = root;
    if(currentNode == NULL){
        ss<<"[]";
    }
    else{
        ss<<"[";
        preOrderR(currentNode,ss);
        ss<<"]";
    }
    return ss.str();


}

template <class KeyType>
std::string BST<KeyType> :: preOrderR(Node<KeyType>* currentNode, std::stringstream& ss) const{
    //cout<<"preOrderR called"<<ss.str()<<endl;
    if(currentNode != NULL){
        ss<<*(currentNode->value)<<",";
        preOrderR(currentNode->left,ss);
        preOrderR(currentNode->right,ss);
    }
    return ss.str();
}




template <class KeyType>
std::string BST<KeyType> :: postOrder() const{            // return string of items from a postorder traversal
    std::stringstream ss;
    Node<KeyType>* currentNode = root;
    if(currentNode == NULL){
        ss<<"[]";
    }
    else{
        ss<<"[";
        postOrderR(currentNode,ss);
        ss<<"]";
    }
    return ss.str();

}


template <class KeyType>
std::string BST<KeyType> :: postOrderR(Node<KeyType>* currentNode, std::stringstream& ss) const{
    if(currentNode != NULL){
        postOrderR(currentNode->left,ss);
        postOrderR(currentNode->right,ss);
        ss<<*(currentNode->value)<<",";
    }
    return ss.str();
}



