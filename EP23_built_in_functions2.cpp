#include <iostream> 
#include <algorithm> 
using namespace std ; 
int minimum(int x , int y ) {
    if(x > y ){
        return y ; 
    }
    else {
        return x ; 
    }
}
int maximum(int x , int y) {
    if(x > y ){
        return x ; 
    }
    else {
        return y ; 
    }
}
int main(){
    cout<< min(20,-20) << endl ; 
    cout<< minimum(20,-20) << endl ; 
    cout<< max(20,-20) << endl ; 
    cout<< maximum(20,-20) << endl ; 
    cout<< min('a','b') << endl ; 
    cout<< "=============================" << endl ;

    int nums[] = {20,10,60,5,35} ; 
    int numSize = size(nums) ; 
    int checkNum = 0; 
    for(int i = 0 ; i < numSize ;i++){
        if(nums[i] > checkNum){
            checkNum = nums[i] ; 
        }
    }
    cout<< checkNum ; 
    return 0 ; 
}