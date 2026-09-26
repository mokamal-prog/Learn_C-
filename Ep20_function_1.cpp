#include <iostream> 
using namespace std ; 
void say_hello(string name ){   // it named void as it doesn't return a value 
    cout<<"Hi " << name << endl; 
} 
void WelcomeStart(string msg = "Hello ", string name = "Unkown" ) // set a default param 
{
    cout<< msg << name << endl ; 
}
int main(){
    say_hello("Mohamed Kamal"); 
    WelcomeStart() ; 
    return 0 ; 
}
/* 
returnDatatType functionName (params) 
{
    block of code 
}


*/