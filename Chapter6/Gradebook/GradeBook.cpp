//
//  GradeBook.cpp
//  Chapter6
//
//  Created by Fernanda Tovar on 9/18/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//

#include <iostream>
using namespace std;

#include "GradeBook.hpp"

GradeBook::GradeBook( string name){
    setCourseName(name);
    maximumGrade=0;
    
}

void GradeBook::setCourseName(string name){
    if(name.length()<= 25)
        courseName =name;
    else{
        courseName=name.substr(0,25);
        cout<<"Name\""<< name<<"\" excess max length (25).\n"
        <<"limiting courseName to first 15 characters.\n"<<endl;
    }
}

string GradeBook::getCourseName(){
    return courseName;
}


void GradeBook::displayMessage(){
    cout << "Welcome to the gradebook for \n" <<getCourseName()<< "!\n"<<endl;
}

void GradeBook::inputGrades(){
    int grade1;
    int grade2;
    int grade3;
    
    cout <<"Enter three integer grades:";
    cin>>grade1>>grade2>>grade3;
    
    maximumGrade =maximum(grade1,grade2,grade3);
}


int GradeBook::maximum (int x, int y, int z){
    int maximumValue =x;
    if (y>maximumValue)
        maximumValue=y;
    if (z > maximumValue)
        maximumValue=z;
    return maximumValue;
}

void GradeBook::displayGradeReport(){
    cout <<"Max of grades entered: "<<maximumGrade<<endl;
}

