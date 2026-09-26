#include <iostream> 
using namespace std ; 
void calc(int num[] , int count) 
{
    int result = 0 ;
    for(int i = 0 ; i < count ;i ++) {
        result += num[i] ;
    }       
    cout<< result ; 
}
int calcs(int num[] , int count)  // it returns value especially an integer value 
{   
    int result = 0 ;
    for(int i = 0 ; i < count ;i ++) {
        result += num[i] ;
    }     
    cout<<"result is "  ; 
    return  result ; 
}
int calculator(int a , int b);  // forward declaration 
int main() { 
    int arrayOfNumber[] = {10,20,30,40} ; 
    int numSize = size(arrayOfNumber) ; 
    calc(arrayOfNumber , numSize) ; 
    cout<<"\n" ; 
    cout<< (calcs(arrayOfNumber , numSize)) + 1 << endl ; 
    cout<< calculator(10,20) << endl; 
    return 0 ; 
}
int calculator(int a , int b) 
{
    return a + b ; 
}