//
//  main.cpp
//  Question2_ex7
//
//  Created by Fernanda Tovar on 10/6/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//
/*
 (Function Template maximum) Write a program that uses a function template called maximum
 to determine the larger of two arguments. Test the program using integer, character and floatingpoint
 number arguments.

*/
#include <iostream>
using namespace std;

template <typename T>
T maximun(T x , T y){
    return (x>y)? x:y;
    
}

int main()
{
    cout<<maximun<int>(4,7)<<endl;
    cout<<maximun<char>('g','e')<<endl;
    cout<<maximun<float> (10.7, 40.5)<<endl;
    return 0;
}
