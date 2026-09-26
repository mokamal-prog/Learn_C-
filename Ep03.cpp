#include <iostream> 
using namespace std; 
int main(){
    cout<<"=======================\n";
    cout<<"Calculate your age\n"; 
    cout<<"=======================\n";

    int age ; 
    cin >> age ; 
    cout << "Your age is "<<age<<" years old\n"; 
    cout << "Your age in month is =>"<< age * 12<<"\n"; 
    cout << "Your age in weeks is =>"<< age * 56<<"\n"; 
    cout << "Your age in days is =>"<< age * 365<<"\n";     
    return 0 ; 
}