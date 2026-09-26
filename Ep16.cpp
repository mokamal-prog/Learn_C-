#include <iostream> 
using namespace std ;
/*
for (init; condition ; update){ Code }
*/
int main(){ 
    int nums[] = {1,2,3,4,5,6}; 


    for(int i= 0; i<=5 ; i++ )
    {
        cout<< i << endl ; 
    }; 

    cout<<"====================="<< endl ; 

    for(int index = 0 ; index< (sizeof(nums)/sizeof(nums[0])); index ++){
        cout<<nums[index]<< endl ; 
    }


    cout<<"====================="<< endl ;

    for (int index=0 ;index< (sizeof(nums)/sizeof(nums[0])); index ++){
        if (nums[index] >= 3){
            cout<< nums[index] << endl ; 
        }
        else {
            continue;
        }
    };
    
    cout<<"====================="<< endl ;
    // Advanced syntax 
    int index = 0 ; 
    int count = sizeof(nums)/ sizeof(nums[0] ) ; 
    for(;;){
        cout<< nums[index]<< endl ; 
        index++ ; 
        if (index == count){
            break ; 
        }
    };
    return 0 ; 
}
