//  main.cpp
// exercise 4
//  Created by Fernanda Tovar on 9/20/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//
#include <iostream>

using namespace std;
int main()
{
    const int arraySize=20;
    int n[arraySize];
    int duplicate;
    int input=0;
    
    cout <<"Type 20 numbers between 10 and 100:";
     
    for (int i=0;i < arraySize; i++) {
        cin>> input;
        duplicate=0;
        //cout<<"start of loop i="<<i<<endl;
      //  cout<<"START duplicate="<<duplicate<<endl;

        if (input >=10 && input <=100){
            for(int j=0; j< arraySize;j++) {
                
                if(n[j] == input){
                    cout<< "skip number because it's a duplicate!"<<endl;
                    duplicate=1;
                    i--;
                    cout<<"after finding duplicate i="<<i<<endl;
                }
            }
            //cout<<"END duplicate="<<duplicate<<endl;
            if(duplicate==0){
                //cout<<"where it goes i="<<i<<endl;
                n[i]=input;
            }

            }
        else{
            cout<<"Invalid number"<<endl;
            i--;
        }
    
        }
    cout<<"_____________RESULTS_BELOW_______________"<<endl;
    for (int k=0;k<arraySize;k++)
    cout <<n[k]<<endl;
        
    return 0;
}


