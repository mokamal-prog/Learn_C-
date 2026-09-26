#include <iostream> 
using namespace std ; 
int main(){
        cout <<"===================="<< endl ; 
        int x = 9 %4  ; 
        cout << x <<endl; 
        int y = 5 ; 
        cout << --y << endl;   // pre decrement 
        cout << ++x << endl ;    // pre increment 
        cout <<"===================="<< endl ;   
        bool a = 5 ; 
        cout << (a == 10)<< endl; 
        cout <<"===================="<< endl ;
        // logical operators  
        bool c = (x < 10 && y < 10)  ;   // logical and 
        cout << c << endl; 
        bool z = !(x = (int)9 ) ;  // logical not 
        cout << z << endl ; 

    return 0 ; 
}