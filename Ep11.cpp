#include<iostream> 
using namespace std ; 
int main(){
    int num[]{1,2,3,4}; 
    cout<<num[0] << endl; 
    num[0] = 0 ; 
    cout<<num[0]<< endl; 
    num[4] = 5 ; 
    cout<< num[4]<< endl; 
    cout<<"Number of array elements is "<< sizeof(num) / sizeof(num[0]) << endl ; 
    return 0 ; 
}