#include <iostream> 
using namespace std; 
int main(){
    int age = 300 ;
    cout << sizeof(age)<< endl;     // 4 
    short int new_age = 300 ; 
    cout << sizeof(new_age) << endl; // 2

    // Int is signed by default which means that it stores positive, negative and 0 
    // while unsigned only takes positive numbers 
    unsigned int x = 100 ; 
    cout << x ; 


    // creating nickname 
    using bignum = long long int ; 
    bignum big_x = 1010101010101010101;
    cout << big_x ;  
    return 0 ; 

}
