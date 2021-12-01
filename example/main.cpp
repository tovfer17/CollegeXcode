//
//  main.cpp
//  AlgoProject
//
//  Created by Fernanda Tovar on 11/20.
//

#include <iostream>
 
using namespace std;


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



class credits {
    int Mycredits;
    int Nyitpercredit;
 
public:
    int gettotalCreditAmount (){
        int mycreditbalance =0;
        return (mycreditbalance = Mycredits *Nyitpercredit);
    }


};

class financialaid {
  int Myfinaid;
    
public:
    int gettotalfinancialaid (){
        int myfinaidbalance =0;
        return (myfinaidbalance = Myfinaid *4);
    }


};
class tuition: public credits, public financialaid {
    using credits::credits;
    using financialaid::financialaid;

public:
    int gettotalbalance (int mycreditbalance, int myfinaidbalance){
        int tuition =0;
        return (tuition = mycreditbalance - myfinaidbalance);
    }

};


class Halfyear: public Fullyear{
    using Fullyear::Fullyear;
    
    
};

class studentDisplay{
public:
    void displayOption (){
        cout<< "1. Full Year\n"<<endl;
        cout<< "2. half Year\n"<<endl;
        
    }
    void displayInputs (){
        cout<< "1. name \n"<<endl;
        cout<< "2. ID\n"<<endl;
        cout<< "2. credits\n"<<endl;
        cout<< "2. how much is each credit?\n"<<endl;
        cout<< "2. how much is your financial aid packet?\n"<<endl;
    }

    
};
class Calculator: public studentDisplay{
using studentDisplay::studentDisplay;
public:
    Calculator(Finances Student){
        Fullyear fullyear;
    }
    
public:
    void correctPin (Finances Student){
        int idNum;
        cout<< "please enter your ID number:"<<endl;
        cin>> idNum;
        while(Student.getID()!= idNum){
            cout<<("incorrect pin")<<endl;
            correctPin(Student);
        }
        cout<<"You are in"<<endl;
    }
public:
    void whichOption(){
        int option;
        displayOption();
        cout<<"which option would you like to see?"<<endl;
        cin>>option;
        switch (option){
            case 1:
                menuchoice (Finances fullyear);
                displayOption();
                break;
            default:
                cout<< "wrong choice"<<endl;
                break;
        }
    }
public:
    void menuChoice( Finances Student){
        int input;
        displayInputs();
        cout<<"please select one then proceed"<<endl;
        cin >>input;
        switch (input){
            case 1:
                string name;
                cin >>name;
                name= Student.MyName();
                break;
            case 2:
                int id;
                cin >>id;
                name= student.();
                break;
                
                
                
        }
        
    }
};


int main(void) {
 Finances Money {"Fer",1090}; //  MyName, MyID
    int total ;
    total = Money. gettotalCreditAmount();
   
    cout<<" Name of Student: " << Money.getName()<<endl;
    cout<<" ID of Student: " << Money.getID()<<endl;
    
    cout << "Total money from financial aid: " << Money. gettotalCreditAmount() << endl;
    
    cout << "Total money due after applying financial aid: " << Money.gettotalbalance(total)<< endl;
   

   return 0;
}
