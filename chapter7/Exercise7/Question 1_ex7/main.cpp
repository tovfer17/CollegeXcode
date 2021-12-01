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


void inputVector(vector <int> &vectorr){
    vector <int> :: iterator it;
    vector <int> :: iterator indexx;
   
    for( it= vectorr.begin(); it != vectorr.end(); ++it){
         cout <<*it<<" ";
    }

   /*
    
    // vector <int> :: iterator first;
       //
    int* pos =vectorr.data();
   
   cout<<"first element is "<<*pos<<endl;
    indexx = distance(vectorr.begin(),it);
    */
}

void  outputVector(const vector <int> &array){
    size_t i;
    
    for (i=0; i< array.size(); ++i){
        cout<<setw(12)<<array[i];
        
}
}
    
int recursivelinearSearch(int firstIndex,  int key)
{
        vector <int> integers1(5);
    outputVector(integers1);
    
    size_t sz = integers1.size();
    //sz=sz-1;

 
    if (firstIndex< 0)
     return false;
    else {
      
        integers1[firstIndex] == static_cast<unsigned int>(key);
       cout<<"ahhh"<<sz<<endl;
        return recursivelinearSearch(firstIndex,  key);
    }
}

 




int main(){
    
    int key;
    

    vector <int> vectorr(5);
    cout<<"\nEnter 5 integers: "<<endl;
    inputVector(vectorr);
    
    /*
    cout<<"Enter integer search key: ";
    cin>>key;
    
    
    int result= recursivelinearSearch(integers1.front(), key);
    
       if(result !=-1)
           cout<<"Found value in element"<<result<<endl;
       else
           cout <<"Value not found"<<endl;
        //return -1;
    */
}






