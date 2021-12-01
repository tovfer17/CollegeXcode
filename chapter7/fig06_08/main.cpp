//
//  main.cpp
//  chapter 6 
//  fig06_08
//
//  Created by Fernanda Tovar on 9/18/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//


#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){
    for (int counter=1;counter <+20; ++counter){
        cout<<setw(10)<< (1 +rand()%6);
        
        if (counter % 5 == 0)
            cout <<endl;
    }
}
