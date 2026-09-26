#include <iostream> 
using namespace std ; 
int main(){
    int day ; 
    cout<<"Choose from day 1 to 25  "; 
    cin >> day ; 
    switch (day)
    {
    case 1:
        /* code */
        cout<<"open from 10 to 16";
        break;
    
    default:
        cout<<"closed";
        break;
    }
    return 0 ; 
}