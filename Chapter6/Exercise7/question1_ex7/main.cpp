// main.cpp
//  Question 1_ex7
//
//  Created by Fernanda Tovar on 10/1/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
/*
(Recursive Linear Search) Use recursive function recursiveLinearSearch
to perform a linear search of the vector. The function should receive the search key and
starting index as arguments. If the search key is found, return its index in the vector; otherwise, return
–1. Each call to the recursive function should check one element value in the vector.
*/

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;




int recursivelinearSearch(vector <int> &vector,  int key)
{
    auto it = find(vector.begin(),vector.end(),key);
    
    if( it == vector.end())
         return -1;
    else if(  long index= distance(vector.begin(),it))
        cout <<index<<endl;
    
    return recursivelinearSearch(vector,  key);
    
 
}
      
int main(){

   int key = 4;
   vector <int> vector = {1,2,3,4,5,6,7,8};
    
   int index = recursivelinearSearch(vector,key );


    if(index !=-1)
          cout<<"Found value in element"<<index<<endl;
    else
          cout <<"Value not found"<<endl;
     
    return 0;
}
