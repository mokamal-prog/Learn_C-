#include <iostream> 
using namespace std ; 
int main(){
    int points_a[] = {1,2,3}; 
    int points_b[] = {4,5,6}; 
    int points_c[] = {7,8,9} ; 
    int points[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // poinst[rows][columns]
    cout<< sizeof(points) <<endl; 
    cout<< points[1][2] <<endl; // 6
    cout<< points[2][0] <<endl; // 7
    cout<< points[2][2] <<endl; // 8

    cout<<"======================="<< endl ; 
    // Bad practice 
    int points_2[3][3] ={1,2,3,4,5,6,7,8,9} ; // it automatically organised 
    cout<< points_2[1][2] <<endl; // 6
    cout<< points_2[2][0] <<endl; // 7
    cout<< points_2[2][2] <<endl; // 8
    return 0 ; 
}