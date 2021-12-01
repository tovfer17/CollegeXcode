//
//  main.cpp
//  algoexercise20
//
//  Created by Fernanda Tovar
//

#include <iostream>
using namespace std;

template<typename T>
void selectionSort(T*a, int size){
    T insert;
    
    for(int j=0; j<size; j++){
        insert=a[j];
        int item =j;
        while (item >0 && a[j-1]>insert){
            a[item]=a[item-1];
            item --;
        }
        a[item]=insert;
    }
}

template <typename T>
void print(T*a, int size){
    for(int i=0; i<size;i++){
        cout<<a[i]<<"\t";
    }
}

template <typename T>
void inputElement (T*a, int size){
    cout<<"\n\n please enter: "<<size<<" elements\n";
    for(int i=0; i<size;i++){
        cin>>a[i];
    }
}

int main(){
    cout<<"Enter number of elements that you want to sort"<<endl;
    int size;
    cin>>size;
    int a[size];
    inputElement(a,size);
    cout<<"\n\nElements before sorting\n\n"<<endl;
    print(a,size);
    cout<<"\n\nElements after sorting \n\n"<<endl;
    selectionSort(a, size);
    print(a,size);
    
    float b[size];
    inputElement(b, size);
    cout<<"\n\nElements before sorting\n\n"<<endl;
    print(a,size);
    cout<<"\n\nElements after sorting\n\n"<<endl;
    selectionSort(b, size);
    print(b,size);
    
    return 0;
}
