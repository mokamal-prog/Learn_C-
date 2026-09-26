#include <iostream> 
using namespace std ; 
int recursion(int x ) {
    if(x == 1 ){
        return 1 ; 
    }
    else if (x == 0) {
        return 1 ; 
    }
    else {
        return x * recursion(x-1) ; 
    }
}
int add(int x ) 
{
    if (x == 0 ) {
        return 0 ; 
    }
    return x + add(x-1)  ; 

}

int main() {
    cout<< recursion(4) << endl ; 
    cout<< add(5)  ; 
    return 0  ; 
}