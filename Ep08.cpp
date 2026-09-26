#include <iostream> 
using namespace std ; 
int main(){
    int age ;
    int points = 800; 
    cout << "Enter Your age: ";  
    cin >> age ;
    if (age <= 12 ) {
        cout << "You are Young" << endl; 
    }
    else if (age <= 21) {
        cout << "You are a teenager" << endl; 
    }
    else if (age <= 30)
    {
        cout << "You are an adult"<< endl ; 
    }
    else 
    {
        cout << "You are Old" ; 
    }
    cout<<"======================================"<<endl; 
    // nested if 
    if (age >= 18 )
    {
        cout<< "You are in"<< endl ; 
        if (points >= 1000)
        {
            cout << "Your can enter"<< endl ; 
        }
        else 
        {
            cout <<"You cann't Enter"<< endl;
        }
    }
    cout<<"========================="<< endl ; 
    // Ternary Operator 
    string msg =(age >=18? "You can enter":"You can't enter");  
    cout<< msg<< endl ;
    cout<<"========================="<< endl ; 
    // nested ternary operator
    string massage = (age <= 12) ? "Young": (age <=21 ) ? "teenager" :"old"; 
    cout<< massage; 
    return 0 ; 
}

/*
Control flow statement 
    if condition : 
Syntax :
=========================================================== 
    if (condition): 
    {
        do something
    }
    else if (condition)
    {
        do something
    }
    else 
    {
        do something else 
    }
=========================================================== 
Ternary Operator  
Syntax : 
=============================================
(condition is true ) ? True : false ; 

// nested 
string massage = (condition)? "do something": (condition)? "do something": "do another something"
*/