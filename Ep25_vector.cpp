#include <iostream> 
#include <vector> 
using namespace std ; 
int main() {
    vector <int> nums = {1,2,3,4,5,6,6} ; 
    vector <int> nums2 {2,4,6,8,9,0}  ; 
    vector <int> nums3(4,50)  ; 
    // loop on vectors 
    for(int i = 0  ; i <nums.size() ; i++ ) // built if method in the class vector 
    {
        cout<< nums.at(i) << " "; 
    }
    cout<<"\n=====================" << endl ; 
    for(int i=0 ; i< nums2.size() ; i++)
    {
        cout<< nums2.at(i) << " " ; 
    }
    cout<<"\n=====================" << endl ; 
    for(int i=0 ; i< nums3.size() ; i++)
    {
        cout<< nums3.at(i) << " " ; 
    }

    cout<<"\n=====================" << endl ; 
    // update or remove 
    vector <int> numbers = {10,20,30}  ; 
    cout<< numbers.at(0) << endl; 
    // 1 Update 
    numbers.push_back(40) ; 
    cout<< numbers.at(3) << endl ; 
    // 2 Remove 
    cout<< numbers.size() << endl ; 
    numbers.pop_back()  ;   // remove from the least
    cout<< numbers.size()<< endl; 

    cout<<"\n=====================" << endl ; 

    cout<< numbers.max_size() << endl ;
    cout<< numbers.capacity() << endl; 
    cout<< numbers.front() << endl; 
    cout<< numbers.back() << endl ; 
    numbers.clear()  ;   // clears the vector  
    cout<< numbers.size() << endl ; 
    cout<< numbers.empty() << endl; 
    return  0 ; 
}