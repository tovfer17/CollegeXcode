//
//  main.cpp
//  question2_ex9
//
//  Created by Fernanda Tovar on 10/11/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//
/*
 (Print an array backward) Write a recursive method stringReverse that takes a character
 array containing a string as an argument and prints the string backward. [Hint: Use String method
 toCharArray, which takes no arguments, to get a char array containing the characters in the String.]

 */

#include <iostream>
using namespace std;


void stringReverse (string wordw, int count){
    int i=0;
    if (i == count){
        i=0;
        cout<<endl;
        return;
    }
    cout<<array[i]<< " ";
    i++;
    RecursiveprintArray(array,count);
    
}
int main() {
  

    string word = "nyit";
    
    cout<< "Array  contains: "<<endl;
    RecursiveprintArray(a,5);
    
  
}
