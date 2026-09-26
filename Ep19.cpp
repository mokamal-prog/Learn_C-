#include <iostream> 
using namespace std ; 
int main() {
    // // 1 
    // int result = 0 ; 
    // int nums[] = {10,20,-20,13,30,-30,40} ; 
    // // int count = sizeof(nums)/ sizeof(nums[0]) ; 
    // int count = size(nums);
    // int index = 0 ; 
    // for(index = 0; index< count ;index++) {
    //     if(nums[index] > 0 && nums[index] % 2 == 0){
    //         result += nums[index] ; 
    //     }; 
    // };
    // cout<< "Final Result is " << result ; 


    // 2 
    // int RightNumber = 7 ; 
    // int trial = 1 ; 
    // int x ; 
    // while(trial <= 3) {
    //     cout<< "Guess the number: "; 
    //     cin >>  x  ; 
    //     if (x == RightNumber ) {
    //         cout<<"Great  you did it "; 
    //         break ; 
    //     } ; 
    //     if(trial < 3) {
    //         cout<< "Try again"<< endl ; 
    //         trial ++ ; 
    //     }
    //     else{
    //         trial ++ ; 
    //         cout<<"Game Over" << endl ; 
    //     };
    // }; 

    // 3 Reverded Elements 
    int nums[5] ; 
    // nums[0] = 10; 
    // nums[1] =20;
    // nums[2]=30;
    // nums[3]=40;
    // nums[4]=50;
    int x ; 
    int numCount = size(nums) ; 
    int i  = 0 ; 
    while( i < numCount ){     // 0 1 2 3 4 
        cout<< "Enter: " ; 
        cin>> x ; 
        nums[i] = x ; 
        i ++ ; 
    }
    cout<<"=======================" << endl ; 
    for(int index = (numCount - 1 ) ; index >= 0 ; index --) {
        cout<< nums[index] << endl ; 
    }
    return 0 ; 
} 