//
//  main.cpp
//  fig06_09
//
//  Created by Fernanda Tovar on 9/18/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(){
    int frequency1=0;
    int frequency2=0;
    int frequency3=0;
    int frequency4=0;
    int frequency5=0;
    int frequency6=0;
    
    int face;
    
    for (int roll=1; roll <=6000000; ++roll){
        face = 1+ rand() %6;
        switch(face){
            case 1:
                ++frequency1;
                break;
            case 2:
                ++frequency2;
                break;
            case 3:
                ++frequency3;
                break;
            case 4:
                ++frequency4;
                break;
            case 5:
                ++frequency5;
                break;
            case 6:
                ++frequency6;
                break;
            default:
                cout <<"Program should never get here!";
        }
    }
    cout <<"FACE"<<setw(13)<< "Frequency"<<endl;
    cout <<"   1"<<setw(13)<<frequency1
     <<"   2"<<setw(13)<<frequency2
     <<"   3"<<setw(13)<<frequency3
     <<"   4"<<setw(13)<<frequency4
     <<"   5"<<setw(13)<<frequency5
    <<"   6"<<setw(13)<<frequency6<<endl;
}
