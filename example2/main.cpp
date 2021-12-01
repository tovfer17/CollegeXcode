//
//  main.cpp
//  AlgoProject
//
//  Created by Fernanda Tovar on 11/20.
//

#include <iostream>
 
using namespace std;

// Base class
class Finances {

public:
    string MyName;
    int MyID;
    int Mycredits;
    int Nyitpercredit;
    int Myfinaid;
   
public:
    Finances( const string& name="", int id =0, int credits=0, int amountpercredit=0, int financialpackage =0)
    :MyName{name},MyID{id},Mycredits{credits},Nyitpercredit{amountpercredit}, Myfinaid{financialpackage}
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
    const int getCredits()
    const {
        return Mycredits;
    }
    const int geteachcredit()
    const {
        return Nyitpercredit;
    }
  
    const int getfinaid()
    const {
        return Myfinaid;
    }
  
    

      
};


//derived class
class Fullyear: public Finances{
    using Finances::Finances;
public:
    int gettotalCreditAmount (){
        int mybalance =0;
        return (mybalance = Mycredits *Nyitpercredit);
    }

public:
    int gettotalbalance (int mybalance){
        int tuition =0;
        return (tuition = mybalance - Myfinaid);
    }

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
    Calculator(Finances student){
        Fullyear fullyear;
    }
    
public:
    void correctPin (Finances student){
        int idNum;
        cout<< "please enter your ID number:"<<endl;
        cin>> idNum;
        while(student.getID()!= idNum){
            cout<<("incorrect pin")<<endl;
            correctPin(student);
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
    void menuChoice( Finances student){
        int input;
        displayInputs();
        cout<<"please select one then proceed"<<endl;
        cin >>input;
        switch (input){
            case 1:
                string name;
                cin >>name;
                
        }
        
    }
};


int main(void) {
    Fullyear Money {"Fer",1090,24,1400,29890}; //  MyName, MyID, Mycredits;Nyitpercredit;Myfinaid;
    int total ;
    total = Money. gettotalCreditAmount();
   
    cout<<" Name of Student: " << Money.getName()<<endl;
    cout<<" ID of Student: " << Money.getID()<<endl;
    
    cout << "Total money from financial aid: " << Money. gettotalCreditAmount() << endl;
    
    cout << "Total money due after applying financial aid: " << Money.gettotalbalance(total)<< endl;
   

   return 0;
}
