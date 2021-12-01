//
//  GradeBook.hpp
//  Chapter6
//
//  Created by Fernanda Tovar on 9/18/20.
//  Copyright © 2020 Fernanda Tovar. All rights reserved.
//

#include<string>
using namespace std;

class GradeBook
{
public:
    GradeBook(string);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void inputGrades();
    void displayGradeReport();
    int maximum(int,int,int);
private:
    string courseName;
    int maximumGrade;
};
