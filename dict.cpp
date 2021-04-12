#include <iostream>                                       
#include <fstream>                                        
#include <sstream>                                        
#include <string.h>                                       

#include "dict.h"

void readIn(string fileName);

// I had no way of running this so im sure that there will be errors in it 

int main(){

    


    string file = "movies_mpaa.txt"
    readIn(file); 



}



void readIn(){
    
    ifstream input(fileName);
    string line;
    
    string title; 
    string names;

    int pos;



    while(line != NULL){
        getline(input,line);
        pos = line.fine("   ");


    }



}











