#include <iostream> 
#include <cmath>     // to access Math built in functions 
#include <cctype> 
using namespace std ; 
// int calc(int x , int y ) {
//     int result = 1 ; 
//     for(int i = 1 ; i <= y ; i++){
//         result *= x  ; 
//     }
//     return result ; 
// }


 
// int main() { 
//     cout<< pow(2,2) << endl ; // power 
//     cout<< fmod(11.5 , 2) << endl ;  // modulus with float numbers 
//     cout<< ceil(3.5)   << endl ; // it takes the higher integer number 
//     cout<< floor(3.5) << endl ;  // it takes the lower integer number 
//     cout<< round(9.4) << endl ; // the nearest integer number (approximately) 
//     cout<< trunc(9.8) << endl ; // it removes decimal number 
//     return 0 ; 
// }

int main() {
    cout<< tolower(10.8) << endl ; // it take the lower integer value 
    cout<< tolower('A') << endl ; // with chars it returns the asci value of  'a' letter 
    cout<< char(tolower('A')) << endl ; // char(97) >> 'a'
    cout<< toupper(10.8) << endl ; 
    cout<<"=============================" << endl ; 
    // string name = "mOHameD KaMAL" ;
    // cout<< name << endl ; 
    // cout<<"=============================" << endl ; 
    // int nameSize = size(name) ; 
    // for(int i = 0 ; i < nameSize ; i++)
    // {
    //     if(isupper(name[i]))
    //     {
    //         name[i] = tolower(name[i]);
    //     }
    //     else {
    //         name[i]= toupper(name[i]);
    //     }
    // }
    // cout<< name << endl ;
    string nametwo = "M oh a med" ; 
    int nametwoSize = size(nametwo) ; 
    for(int i = 0 ; i < nametwoSize ; i++)
    {
        if(isspace(nametwo[i])){
            continue;
        }
        cout<<nametwo[i]  ; 
    }

    return 0 ; 
}