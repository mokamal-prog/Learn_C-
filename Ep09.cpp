#include <iostream> 
using namespace std ; 

// // app 1 
// int main(){
//     cout<<"Enter a number to check: ";
//     int num ; 
//     cin >> num ;
//     if (num % 2 == 0 ){
//         cout<< num <<" is even " << endl ;
//     }
//     else {
//         cout<< num << " is odd"<< endl ; 
//     }
//     return 0 ; 
// }


// // app 2 
// int main(){
//     cout<<"Enter thre numbers : "<< endl ; 
//     int a ,b,c ; 
//     cin >> a >> b >> c ; 
//     if (a >= b ){
//         if (a >= c){
//             cout<<  "A is bigger"<< endl; 
//         }
//         else{
//             cout<<"C is bigger"<< endl; 
//         }
//     }
//     else {
//         if (b >= c ){
//             cout<<"B is bigger"<< endl ; 
//         }
//         else {
//             cout<<"C is bigger "<< endl ; 
//         }
//     }
//     return 0 ; 
// }

// App 3 Calculator 
int main(){
    string opera ; 
    int x ; 
    int y ; 
    cout<< "Choose:  " ; 
    cout<<"+ , _ , * , /"<< endl;  
    cin>> opera ; 
    cout<< "Enter the first number  " ; 
    cin >> x ;
    cout<<"Enter the second number  "; 
    cin>> y ; 
    if (opera == "+"){
        cout<<"Sum of two Numbers  "; 
        cout<< x + y << endl; 
    }
    else if (opera == "-"){
        if (x>y ){
            cout<<"Difference of  two Numbers  "; 
            cout<< x -y << endl; 
        }
        else {
            cout<<"Difference of two numbers  "; 
            cout<< y-x << endl; 
        }
    }
    else if(opera == "*"){
        cout<<"Multiplying of two numbers  "; 
        cout<< x * y << endl; 
    }
    else if (opera == "/"){
        cout<<"Devision of two numbers  ";
        cout<< x/y << endl ; 
    }
    else {
        cout<<"Wrong operation , please try again "; 
    }
    return 0 ; 
}