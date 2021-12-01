//
//  main.cpp
//  Exercise9 -q9
//
//  Created by Fernanda Tovar on 10/11/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//
/*Print an array) Write a recursive method printArray that
 displays all the elements in an
array of integers, separated by spaces.
*/

#include <iostream>
using namespace std;


void RecursiveprintArray (int array[], int count){
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
  

    int a[5]= {10,11,12,15,16};
    
    cout<< "Array  contains: "<<endl;
    RecursiveprintArray(a,5);
    
  
}
