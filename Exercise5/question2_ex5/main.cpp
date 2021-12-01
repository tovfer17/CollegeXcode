//
//  main.cpp
//  question2_ex5
//
//  Created by Fernanda Tovar on 9/28/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.

/**(Print Array Range) Overload function template printArray of Fig. 14.1 so that it takes
two additional integer arguments, namely int lowSubscript and int highSubscript. A call to this
function will print only the designated portion of the array. Validate lowSubscript and
highSubscript;
if either is out of range or if highSubscript is less than or equal to lowSubscript, the overloaded
printArray function should return 0; otherwise, printArray should return the number of
elements printed. Then modify main to exercise both versions of printArray on arrays a, b and c
(lines 22–24 of Fig. 14.1). Be sure to test all capabilities of both versions of printArray.
 
 http://deekle.net/Jones/FallAndWinter2005-6/COP/14.pdf */

#include <iostream>
using namespace std;

template <typename T>
void printArray (const T*const array, int count){
    for (int i=0;i< count;i++)
        cout<<array[i]<< " ";
    
    cout<<endl;

    
}
// elements = printArray(a,aCount,3,4) ;
template <typename T>
int printArray ( T const * array, int length, int lowSubscript, int highSubscript){
    int count;
    //cout<<"Length "<<length<<"\n";
    if( length < 0 || lowSubscript<0  || highSubscript >= length){
        cout <<"return 0 ";
        return 0;
          
    }
   
        for (int i=lowSubscript,count=0 ;i<=highSubscript; i++){
            count ++;
            cout<<array[i]<< " ";
            
    }
    cout<<"\n";
    return  count;
    
}
int main() {
  
    //_______________INPUT_________________//
    const int aCount=5;
    const int bCount=5;
    const int cCount=6;
    
    int elements;
    
    int a[aCount];
    float b[bCount];
    char  c[cCount];
    
    cout <<"Type 5 int numbers  then type 5 float numbers then type a 5 letter word . hit enter  : ";
   
    for (int i=0; i<aCount;i++)
        cin>>a[i];
    /*
    for (int i=0; i< bCount;i++)
         cin>>b[i];
     
    for (int i=0; i<cCount;i++)
        cin>>c[i];
 
    */
    //_______________OUTPUT_________________//
    
    cout<< " Original Array a contains: "<<endl;
    printArray(a,aCount);
    cout<< " \n Overloaded function template Array a contains: "<<endl;
    elements = printArray(a,aCount,3,4) ;
    
    cout << sizeof(elements)<< " elements;" << endl;
    cout<< " \n Overloaded function template Array a with Invalid subscripts contains: "<<endl;
    elements= printArray(a,aCount,-1,7);
    cout <<elements<< "elements;" << endl;
    /*
    cout <<"----------------------------------------------------------------------------------------- ";
    cout<<endl;
    cout<<"Orignal Array b contains: "<<endl;
    printArray(b,bCount);
    cout<< " Overloaded function template Array b contains: "<<endl;
   elements= printArray(b,bCount,3,4);
    cout <<elements<< "elements;";
    cout<< " Overloaded function template Array b with Invalid subscripts contains: "<<endl;
    elements= printArray(b,bCount,2,5);
    cout <<elements<< "elements;";
    cout <<"----------------------------------------------------------------------------------------- ";
    cout<<endl;
    
    cout<<"Orignal Array c contains: "<<endl;
    printArray(c,cCount);
    cout<< " Overloaded function template Array c contains: "<<endl;
    elements= printArray(c,cCount,1,4);
    cout <<elements<< "elements;";
    cout<< " Overloaded function template Array c with Invalid subscripts contains: "<<endl;
    elements= printArray(c,cCount,7,6);
    cout <<elements<< "elements;";
    return 0;
     */
    return 0;
}

