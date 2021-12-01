//
//  main.cpp
//  question3_ex5
//
//  Created by Fernanda Tovar on 9/29/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//


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
    cout<<maximun<float> ('10.7', '40.5')<<endl;
    return 0;
}
