//
//  main.cpp
//  fig07_25
//
//  Created by Fernanda Tovar on 10/1/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void outputVector (const vector <int> &);
void inputVector(vector<int>&);

void inputVector(vector <int> &array){
    for(size_t i=0; i<array.size(); ++i)
        cin>>array[i];
}

void  outputVector(const vector <int> &array){
    size_t i;
    
    for (i=0; i< array.size(); ++i){
        cout<<setw(12)<<array[i];
        
        if ((i+1)%4==0)
            cout<<endl;
    }
    if(i %4 !=0)
        cout<<endl;
}

int main(){
    vector <int> integers1(4);
    vector <int> integers2(4);
    
    cout<< "size of vector integers1 is "<<integers1.size()
        <<"\nvector after initialization:"<<endl;
    outputVector(integers1);
    
    cout<< "size of vector integers2 is "<<integers2.size()
        <<"\nvector after initialization:"<<endl;
    outputVector(integers2);
    
    cout<<"\nEnter 8 integers: "<<endl;
    inputVector(integers1);
    inputVector(integers2);
    
    cout<<"\nAfter Input, the vectors contain:\n"
    <<"integers1: "<<endl;
    outputVector(integers1);
    cout<<"integers2: "<<endl;
    outputVector(integers2);
    
    cout<<"\nEvaluating: integers1 !=integers2"<<endl;
    
    if (integers1 !=integers2)
        cout <<"integers1 and integers2 are not equal"<<endl;
    
    vector< int> integers3 (integers1);
    
    cout<<"\nSize of vector integers3 is "<<integers3.size()
    <<"\nvector after initialization: "<<endl;
    outputVector(integers3);
    
    cout<<"\nAssigning integers2 to integers1: "<<endl;
    integers1=integers2;
    
    cout<<"integers1: "<<endl;
    outputVector(integers1);
    cout<<"integers2: "<<endl;
    outputVector(integers2);
    
    cout<<"\nEvaluating:integers1==integers2"<<endl;
    
    if(integers1==integers2)
        cout<<"integers1 and integers2 are equal"<<endl;
    
    
    cout<<"\nintegers1[3] is "<<integers1[3];
    
    cout<<"\n\nAssigning 1000 to integers1[5]"<<endl;
    integers1[3] =1000;
    cout<<"integers1: "<<endl;
    outputVector(integers1);
    
    try{
        cout<<"\nAttempt to display integers1.at(4)"<<endl;
        cout<<integers1.at(4)<<endl;
    }
    catch (out_of_range &ex){
        cout <<"An exception occured: "<<ex.what()<<endl;
    }
}
