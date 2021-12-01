//
//  main.cpp
//  AlgoProject
//
//  Created by Fernanda Tovar on 11/20.
//

#include <iostream>
 
using namespace std;

//constructor
class Profile {

public:
    string MyName;
    int MyID;

   
public:
    Profile( const string& name="", int id =0)
    :MyName{name},MyID{id}
    {
        
    }
    
    const string& getName()
    const {
        return MyName;
    }
    const int getID()
    const {
        return MyID;
    }
   
};



//base class #1
class credits {
   
public:
    int gettotalCreditAmount (int Mycredits , int Nyitpercredit){
        int mycreditbalance =0;
        return (mycreditbalance = Mycredits * Nyitpercredit);
    }


};

//base class #2
class financialaid {
 
public:
    int gettotalfinancialaid (int Myfinaid){
        int myfinaidbalance =0;
        return (myfinaidbalance = Myfinaid );
    }


};



//derived class from base class #1 and #2
class tuition: public credits, public financialaid {
    using credits::credits;
    using financialaid::financialaid;
 

public:
    int gettotalbalance (int mycreditbalance, int myfinaidbalance){
        int tuition =0;
        return (tuition = mycreditbalance - myfinaidbalance);
    }

};



//base class # 4
class listofGrades{
    int count= 5;
    double total;
public:
    int alltestscores ( int grades[], int count){
        
        for(int j=0; j<count; j++){
            cout<<"The grades are: "<<grades[j]<<endl ;
        }
         
        for(int x=0; x<count; x++){
            total = total + grades[x];
        }
        cout<<"total is: "<<total<<endl;
        return total;
    }
};


//derived class of base class # 4
class classGrade: public listofGrades{
    using listofGrades::listofGrades;
    
public:
    int average( int total, int count){
        double average = total/count;
        return average;
    }
};

//derived class from dervied class that uses base class # 4 (mutlilevel inheritance)
class GPA: public classGrade{
int count= 5;
double total;
public:
int allclasses ( int classes[], int count){
    
    for(int j=0; j<count; j++){
        cout<<"The classes grades: "<<classes[j]<<endl ;
    }
     
    for(int x=0; x<count; x++){
        total = total + classes[x];
    }
    cout<<"total is: "<<total<<endl;
    return total;
}
};

// base class #3
class studentDisplay{
public:
  
    void displayInputs (){
        cout<< "1. how much tuition are you paying?\n"<<endl;
        cout<< "2. calculate grade in class\n"<<endl;
        cout<< "3. calculateGPA\n"<<endl;
        cout<< "4. exit\n"<<endl;
   
    }

    
};



//dervied class from base class #3
class Calculator: public studentDisplay{
using studentDisplay::studentDisplay;

public:
    void correctPin (Profile student){
        int idNum;
        cout<< "please enter your ID number:"<<endl;
        cin>> idNum;
        while(student.getID()!= idNum){
            cout<<"incorrect pin"<<endl;
            correctPin(student);
        }
        cout<<"You have access now! please select one: "<<endl;
    }

public:
    void menuChoice( tuition student, GPA stu){
        int input;
        displayInputs();
        cout<<"select 1 ,2 ,3, or 4 to exit!"<<endl;
        cin >>input;
        int Mycredits;
        int Nyitpercredit;
        int Myfinaid;
        int count=5;
        int grades[count];
        int classes[count];
        double total1;
        double total2;
        switch (input){
            case 1:
                cout<<" how many credits?"<<endl;
                cin>> Mycredits;
                cout<<" how much for each credit?"<<endl;
                cin>>  Nyitpercredit;
                cout<<" how much is in your financial package?"<<endl;
                cin>> Myfinaid;
                results(student,Mycredits,Nyitpercredit,Myfinaid);
                break;
            case 2:
                cout<<"Enter all your grades from one class"<<endl;
                for (int i=0; i<count;i++){
                    cin>>grades[i];
                    
                }
                total1 = stu.alltestscores(grades,count);
              
                average(stu, total1, count);
                break;
            case 3:
                cout<<"Enter all your classes grades"<<endl;
                for (int i=0; i<count;i++){
                    cin>> classes[i];
                    
                }
                total2 = stu.allclasses(classes,count);
                average(stu, total2, count);
                break;
            case 4:
                cout<<" Bye"<<endl;
                break;
            default:
                cout<< "wrong choice"<<endl;
                break;
                
        }
        
    }

public:
    void average(GPA stu, double total, int count){
        int formula2=0;
        formula2=stu.average(total, count);
        cout<< " my average: "<<formula2<<endl;
        
        switch( formula2 / 10 )
             {

             case 10:
             case 9:
                 printf("Grade: A\n");
                 break;

             case 8:
                 printf("Grade: B\n");
                 break;

             case 7:
                 printf("Grade: C\n");
                 break;

             case 6:
                 printf("Grade: D\n");
                 break;

             case 5:
                 printf("Grade: E\n");
                 break;

             default:
                 printf("Grade: F\n");
                 break;

             }

    };
    
    
    
public:
    void results(tuition student, int Mycredits, int Nyitpercredit, int Myfinaid){
        
        int formula=0;
        formula= student.gettotalCreditAmount(Mycredits, Nyitpercredit);
        cout<< "how much is for my classes: "<<formula<<endl;
        
        
        int a;
        a=student.gettotalbalance(formula,Myfinaid);
        cout<<" Total balance after substracting financial aid: " << a << endl;
      
        
        //{24,1400,29890} //  MyName, MyID, Mycredits;Nyitpercredit;Myfinaid;
     
    }
};




int main(void) {
    
 cout<< "Welcome to your NYIT calculator! "<<endl;
  cout<< "Calculate your finances, your class grades and your GPA! "<<endl;
 Profile Money {"Fer", 10}; //  MyName, MyID
   
    cout<<" Name of Student: " << Money.getName()<<endl;
 
  
    Profile a;
    tuition b;
    GPA c;

    Calculator user;
    user.correctPin(Money);
    user.menuChoice(b,c);
    
    
   return 0;
}












































































