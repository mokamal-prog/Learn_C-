#include <iostream> 
#include <array>
using namespace std ; 
// Array class from std 
int main(){
    array <int,4> nums = {100,200,300,400}; 
    cout<< nums.front()<< endl ;                   //cout<<nums[0] << endl ; 
    cout<<nums.back()<< endl ; 
    cout<< nums.at(0) << endl  ; 
    cout<< nums.size() << endl ; 
    cout << nums.max_size()<< endl ; 
    return 0 ; 


}