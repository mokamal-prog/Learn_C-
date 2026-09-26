#include <iostream> 
using namespace std ; 
/* 
while(condition) {
    code block  
}

Do while : 
do{
    code 
} while (condition)


*/
int main() {
    int i = 0 ; 
    while (i<= 5) {
        cout<< i << endl ; 
        i++ ;
    }
    cout<< "==============="<< endl ; 
    int index = 5 ; 
    do {
        cout<<index<< endl ; 
        index++ ; 

    }while (index<=5); 
    return 0 ; 
}