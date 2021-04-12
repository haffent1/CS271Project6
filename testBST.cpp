#include <iostream>
#include "BST.h"
using namespace std;

void testBST();
void testBSTCopy();
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
void testStringOverLoad();


int main(){
    //testBST(); // we know that this is working due to the fact that other functions work
    //testBSTCopy();
    testEmpty();      
    testGet();    
    testInsert();     
    testRemove(); // this function is still giving me a segfault
    testMaximum();   
    testMinimum();    
    testSuccessor();  
    testPredecessor();
    testInOrder();    //this is the last of the order functions that needs to be written
    testPreOrder();   
    testPostOrder();  
    testStringOverLoad();
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
    int x=10;
    int y=1;
    int* value = &x;
    int* value2 = &y;

    bst.insert(value);
    bst.insert(value2);
    int* node=bst.get(1);
    cout<<"test get, should be 1: "<< *node<<endl;

}




void testBSTCopy(){


    BST<int> bst;
    BST<int> testCopyBst;
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

    //testCopyBst = bst;
    cout<<"debug from inside TestBSTCopy"<<endl;
    //int& testCopy = &bst;
    testCopyBst.copy(bst);
    
    string testCopyString = testCopyBst.inOrder();
    cout<<"test of copy: "<<testCopyString<<endl;


    cout<<"test copy"<<endl;



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
    bst.remove(10);
    cout<<"test remove 10: "<< bst <<endl;

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
void testSuccessor(){   // return the successor of k
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

    int* testS = bst.successor(1);
    cout<<"test of successor, should be 10: "<<*testS<<endl;

}
void testPredecessor(){ // return the predecessor of kstd::string in IS THIS RUNNING RIGHT

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
    int* testS = bst.predecessor(10);
    cout<<"test of testPredecessor, should be 15: "<<*testS<<endl;


}//end of Predecessors

void testInOrder(){              // return string of items from an inorder traversalstd::string pre


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
    string testPre = bst.inOrder();
    cout<<"test of InOrder"<<testPre<<endl;




}
void testPreOrder(){             // return string of items from a preorder traversal

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
    string testPre = bst.preOrder();
    cout<<"test of PreOrder"<<testPre<<endl;
}

void testPostOrder(){            // return string of items from a postorder traversal
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
    string testPre = bst.postOrder();
    cout<<"test of postOrder"<<testPre<<endl;
}

void testStringOverLoad(){


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
    string testPre = bst.postOrder();
    cout << "test of bst string overload: " << bst <<endl;

}
