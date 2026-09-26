#include <iostream> 
#include <algorithm> 
using namespace std ; 
int main(){
    // int num = 100 ; 
    // int* ptr = &num ; 
    // cout<< "Value is " << num << endl; 
    // cout<< "Memmory address is " << ptr << endl; 
    // *ptr = 200 ; // change in value without change in memory adress 
    // cout<< "Value is " << num << endl; 
    // cout<< "Memmory address is " << ptr << endl; 

    // //2 Pointing to array 
    // int nums[] = {10,20,30,40}; 
    // int* ptr = &nums[0] ; 
    /*
    int *ptr = nums // it works 
    */
    // cout<< "First element" << endl; 
    // cout<< "Value with index " << nums[0] << endl; 
    // cout<< "Value with pointer " << *ptr << endl; 
    // cout<< "Memory adress " << ptr << endl; 
    // cout<< "========================="<< endl; 
    // cout<< "Second Element" << endl ; 
    // cout<< "Value with index " << nums[1] << endl ; 
    // cout<< "Value with pointer " << *(ptr+1) << endl ; 
    // cout<< "Memory adress " << ptr +1 << endl; 


    // 3 
    // int* ptr   = NULL; 
    // cout<< ptr ; 

    // int num = 100 ; 
    // void *ptr = &num ; 
    // cout<< *ptr << endl; // error 

    // // solution 
    // // C-style 
    // cout<< *(int*)ptr  << endl; 
    // // Modern 
    // cout<< *static_cast<int*>(ptr) << endl; 
   
    


    return 0 ; 
} 
