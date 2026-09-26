#include <iostream> 
using namespace std ; 
int main(){
    cout << "\n=======================\n";
    int a ; 
    double b = 20.5 ; 
    a = b ; 
    cout  << a <<endl; 
    cout << sizeof(a);

    cout << "\n=======================\n";

    char c = 'C'; 
    int d = 20 ; 
    cout << int(c) << endl ; 
    cout << c + d << endl; 


    cout << "\n=======================\n";
    int e = 20 ; 
    double f = 20.5 ; 
    cout << e+f << endl;   // implicit conversion
    cout << sizeof(e+f);    // 8 bytes  

    cout << "\n=======================\n";
    // explicit conversion 
    int x = 20 ; 
    double y = 20.5 ; 
    cout << x + (int)y << endl; // explicit conversion 
    cout << "\n=======================\n";
    return 0 ; 
}