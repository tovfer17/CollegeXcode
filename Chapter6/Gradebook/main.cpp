
//
//  main.cpp
//  Chapter6
//  fig06_05

//
//  Created by Fernanda Tovar on 9/18/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//


#include "GradeBook.hpp"
int main(){
    GradeBook myGradeBook("Cs1010");
    
    myGradeBook.displayMessage();
    myGradeBook.inputGrades();
    myGradeBook.displayGradeReport();
}
