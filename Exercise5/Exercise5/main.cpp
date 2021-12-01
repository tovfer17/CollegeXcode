//
//  main.cpp
//  exercise 5 question 1 
//
//  Created by Fernanda Tovar on 9/25/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//
//(Selection Sort Function Template) Write a function template selectionSort and then Write a
//driver program that inputs, sorts and outputs an int array and a float array.
//

#include <iostream>
using namespace std;



template <typename T>
void selectionSort ( T* array, int count){
    for( int x=0; x<count-1;x++){
        T smallest =array[x];
        int p = 0;
        
        
        for (int i=x; i<count; i++){
            if(smallest>array[i]){
                smallest=array[i];
                 p= i;
                //cout<<" Smallest:"<< smallest<<" p:"<<p<<"\n";
            }
        }
        
       // cout<<"END \n";
        
               T oldValue=array[x];
       if(smallest != oldValue){
               array[x]=smallest;
               array[p]=oldValue;
     //   cout<<"Index:"<<x<<" replaced with Smallest: "<<smallest<<"\nIndex: "<<p<<" replaced with Old Value: "<<oldValue<<"\n ARRAY:";
        //for (int i=0;i< count;i++)
                //   cout<<array[i]<< " ";
               //cout<<endl;
       }
       
        
        
    }
    
    //________Print_________//
    for (int i=0;i< count;i++)
           cout<<array[i]<< " ";
       
       cout<<endl;
    
}

int main() {
  
    //_______________INPUT_________________//
    const int aCount=5;
    const int bCount=5;
    
    int a[aCount];
    float b[bCount];
    
    cout <<"Type 5 int numbers and then hit enter and then type 7 float numbers: ";
    for (int i=0; i<aCount;i++)
        cin>>a[i];
    
    for (int i=0; i<bCount;i++)
        cin>>b[i];

    
    
    //_______________OUTPUT_________________//
    cout<< "Array a contains: "<<endl;
    selectionSort(a,aCount);
    
   cout<<"Array b contains: "<<endl;
   selectionSort(b,bCount);
}
