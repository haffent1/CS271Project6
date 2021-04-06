#ifndef DIC_H         
#define DIC_H         


//this is a copy of the inclass notes
/*
Dictionary ADT:                                                                 
    (key,value) pairs                                                           
    search for value based off of value                                         
                                                                                
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

*/T
#endif

