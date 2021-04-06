#include <iostream>
#include "BST.h"
using namespace std;

void testBST();
void testBSTcopy();
void testEmpty();                           // return true if empty; false o/w
void testGet();         // return first item with key equal to k
void testInsert();                      // insert k into the tree
void testRemove();                // delete first item with key equal to k
void testMaximum();                     // return the maximum item
void testMinimum();                     // return the minimum item
void testSuccessor();   // return the successor of k
void testPredecessor(); // return the predecessor of kstd::string in
void testInOrder();              // return string of items from an inorder traversalstd::string pre
void testPreOrder();             // return string of items from a preorder traversal
void testPostOrder();            // return string of items from a postorder traversal


int main(){
    //testBST(); //test BST is not running
    //testBSTcopy();
    testEmpty();      
    testGet();        
    testInsert();     
    //testRemove();     
    testMaximum();   
    testMinimum();    
    //testSuccessor();  
    //testPredecessor();
    //testInOrder();    
    //testPreOrder();   
    //testPostOrder();  
}



void testBST(){
     //cout<<"test BST"<<endl;
     BST<int> bstTest;

     cout<<"BST ran"<<endl;
}// end of test BST
void testEmpty(){                         // return true if empty; false o/w
    BST<int> bstEmpty;
    cout<<"empty "<<bstEmpty.empty()<<endl;

    int x=10;
    int* value = &x;
    bstEmpty.insert(value);
    cout<<"not empty "<<bstEmpty.empty()<<endl;
}//end of test Empty

void testGet(){
    BST<int> bst;
    //cout<<"BST assigned"<<endl;
    int x=10;
    int y=1;
    int* value = &x;
    int* value2 = &y;

    bst.insert(value);
    bst.insert(value2);
    cout<<"test get"<<endl;

}


void testInsert(){                      // insert k into the tree
    BST<int> bst;
    int x=5;
    int* value = &x;
    bst.insert(value);
    cout<<"testInsert ran"<<endl;
}
void testRemove(){               // delete first item with key equal to k
    BST<int> bst;
    //cout<<"BST assigned"<<endl;
    int x=10;
    int y=1;
    int i=15;
    int* value = &x;
    int* value2 = &y;
    int* value3 = &i;

    bst.insert(value);
    bst.insert(value2);
    bst.insert(value3);
    cout<<"test remove  "<<endl;

}
void testMaximum(){
    BST<int> bst;
    //cout<<"BST assigned"<<endl;
    int x=10;
    int y=1;
    int i=15;
    int* value = &x;
    int* value2 = &y;
    int* value3 = &i;

    bst.insert(value);
    bst.insert(value2);
    bst.insert(value3);
    int* min =  bst.maximum();
    cout<<"testMAX: value should be 15: "<<*min<<endl;

    //cout<<"testMax ran"<<endl;

}
void testMinimum(){ //min is running but not retuning the right value
    //cout<<"testMin called"<<endl;
    BST<int> bst;
    int x=10;
    int y=1;
    int i=15;
    int* value = &x;
    int* value2 = &y;
    int* value3 = &i;

    bst.insert(value);
    bst.insert(value2);
    bst.insert(value3);
    int* min =  bst.minimum();
    cout<<"testMin:value should be 1: "<<*min<<endl;

    //cout<<"testMin ran"<<endl;
}
/*
void testSuccessor();   // return the successor of k
void testPredecessor(); // return the predecessor of kstd::string in
void testInOrder();              // return string of items from an inorder traversalstd::string pre
void testPreOrder();             // return string of items from a preorder traversal
void testPostOrder();            // return string of items from a postorder traversal
*/
