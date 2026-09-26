#include <iostream> 
#include <array> 
using namespace std ; 
int main(){
    int points = 0 ; 
    int answers[3] ; 
    cout<<"Sequence 1: " << endl ; 
    cout<<"1|5|10|16|?? " << endl ; 
    cin >> answers[0] ; 

    cout<<"Sequence 2: " << endl ; 
    cout<<"2|4|6|8|?? " << endl ; 
    cin >> answers[1] ; 

    cout<<"Sequence 3: " << endl ; 
    cout<<"1|1|2|3|?? " << endl ; 
    cin >> answers[2] ; 
    int sequences[3][5] = {
        {1,5,10,16,23} , 
        {2,4,6,8,10} ,
        {1 ,1 ,2 ,3 ,5}
    };
    
    if (answers[0] == sequences[0][4]){
        points++ ; 
    }; 
    if (answers[1] == sequences[1][4]){
        points++ ; 
    };
    if (answers[2] == sequences[2][4]){
        points++ ; 
       
    }; 
    cout<<"Your points is: "<< points<<"out of 3"; 
    
    return 0 ; 

}
