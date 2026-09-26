#include <iostream> 
using namespace std ; 
int main() { 
    int nums[] = {100 , 200, 300, 400 , 500 ,600} ;
    int count = sizeof(nums)/ sizeof(nums[0]); 
    // int index = 0 ; 
    // for(;;){
    //     cout<<nums[index]<< endl ; 
    //     index += 2 ;  
    //     if(index == count ){
    //         break ; 
    //     }
    // }; 
    // int index = sizeof(nums) / sizeof(nums[0]) - 1 ; 
    // for(; ;){
    //     cout<< nums[index]<< endl ; 
    //     index -= 1 ; 
    //     if (index == 1){
    //         break ; 
    //     }
    // }; 


    string products[] = {"item 1", "item 2" , "item 3"}  ; 
    string size[] = {"small" , "Lare" , "X_large"} ; 
    int prod_count = sizeof(products) / sizeof(products[0]);
    int size_count = sizeof(size) / sizeof(size[0]) ; 
    int p = 0 ; 
    int s = 0 ; 
    for(p = 0 ; p < prod_count  ;p++ ){ 
        cout<< "Product Name : " << endl ; 
        cout<< products[p] << endl ; 
        cout<<"Sizes: "<< endl ; 
        for(s=0; s< size_count ; s++){
            if(s<=1){
                cout<<size[s]<< "," ; 
            }
            else{
                cout<< size[s]; 
            }
            
        }

        cout<<"\n"<<"========================"<< endl ; 
        // p++ ;
    }
    
    return 0 ; 
}