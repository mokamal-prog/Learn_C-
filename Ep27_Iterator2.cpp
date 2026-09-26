#include <iostream> 
#include <vector> 
#include <algorithm> // to access functions 
/*
use iterator to 
    - sort 
    - count 
    - reverse
*/
using namespace std ; 
int main(){
    vector <int> numbers = {20,40,20,10,30}  ; 
    cout<< count(numbers.begin(), numbers.end() , 20)<< endl ; 
    cout<<"===============" << endl; 
    for(int n : numbers){
        cout<< n << " "  ; 
    }
    cout<<"\n"  ; 
    sort(numbers.begin(), numbers.end()) ; 
    for(int n : numbers){
        cout<< n << " "  ; 
    }
    cout<< "\n======================\n"; 

    reverse(numbers.begin() , numbers.end()) ; 
    for(int n : numbers){
        cout<< n << " "  ; 
    }
    return 0 ; 
}