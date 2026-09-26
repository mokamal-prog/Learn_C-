#include <iostream>
#include <vector> 
using namespace std ; 
int main() {
    // // 1 

    // vector <int> nums = {10,20,30} ; 
    // vector <int> :: iterator it = nums.begin(); 
    // auto ite = nums.begin() + 1 ; 
    // cout<< "First element is " << *it  << endl ; 
    // // star means what its point to , while it points to the element , however it's not pointer 
    // cout<< "Second element is " << *ite  << endl ; 

    // // remove elements 
    // nums.erase(nums.begin() , nums.begin()+2) ;   // (indluded, excluded)
    // cout<< "First element after delete " << *it  << endl ; 

    // // 2 
    // vector <int> nums = {10,20,30,40}  ; 
    // vector <int> :: iterator first = nums.begin() ; 
    // vector <int> :: iterator last = nums.end() - 1 ; 
    // cout<< "First element is "<< *first << endl ; 
    // cout<< "Second element is "<< first[1] << endl ;  
    // cout<< "Third element is "<< first[2] << endl ;  
    // cout<< "Last element is " << *last << endl; 
    // cout<< "Third elements is "<< *(last-1) << endl; 
 
    // cout<< "==================================" << endl ; 

    // advance(first, 3);   // advance means go forward 
    // cout<< "First element is "<< *first << endl ; 

    // advance(first,-2); 
    // cout<< "First element is "<< *first << endl ; 

    // 3-Loop with iterator 
    vector <int> nums = {10,20,30,40,50}; 
    vector <int> :: iterator it = nums.begin() ; 
    for(it = nums.begin() ; it != nums.end() ;  it++ ){
        cout<< *it << endl; 
    }
    cout<<"===================="<< endl; 
    // Ranged Loop 
    for(int val : nums){
        cout<< val << endl ; 
    }
    cout<<"===================="<< endl; 
    int numbers[] = {10,20,30,40,50} ; 
    for(int x : numbers){
        cout<< x << endl ; 
    }

    return 0 ;
}