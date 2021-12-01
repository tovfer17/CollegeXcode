
//
//  main.cpp
//  exercise 5
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
void printArray (const T*const array, int count){
    for (int i=0;i< count;++i)
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
    printArray(a,aCount);
    
    cout<<"Array b contains: "<<endl;
    printArray(b,bCount);
}

