//
//  main.cpp
//  chapter7 exercise 4 question 1
//Use a one-dimensional array to solve the following problem: Read in 20 numbers, each of which is between 10 and 100, inclusive.
//As each number is read, validate it and store it in the array only if it is not a duplicate of a number already read. After reading all the values, display only the unique values that the user entered. Provide for the “worst case” in which all 20 numbers are different. Use the smallest possible array to solve this problem.

//  Created by Fernanda Tovar on 9/18/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n[5] ={0,0,0,0,0};
    int i=0;
    int j=0;
    
      cout <<"Type 20 numbers between 10 and 100:";
    
    
    
    for( i=0; i<5; i++){
        cin>>n[i];
        
    }
    cout << "Element" <<setw(13)<< "Value"<<endl;
    
    for (j=0;j<5;j++)
        cout <<setw(7)<<j<<setw(13)<<n[j]<<endl;
    
    return 0;
}
