#include <iostream>
#include <cstring>
using namespace std ; 
int main(){
    char name[] = {'M','o','h','a','m','e','d','\0'}   ; // string is an array of characters 
    cout<< name << endl ;  
    cout<< sizeof(name) << endl ; 

    cout<<"=================="<< endl ;  

    string name_class = "Mohamed" ;  // we used class of string 
    cout<< name_class << endl ; 
    cout<< sizeof(name_class)<< endl ; 

    // concatenating strings 
    char fname[] = "Mohamed "; 
    char sname[] = "Kamal"; 
    cout<< fname << sname << endl ; 

    cout<<"=================="<< endl ;  

    // concatenating strings  using methods 
    cout<< strcat(fname, sname) << endl ;   //strcat 
    string first_name = "Mohamed "; 
    string second_name = "Kamal" ; 
    string full_name = first_name + second_name ; 
    cout<< full_name << endl ; // using + method 
    cout<< first_name.append(second_name) << endl ; // using append method 
    return 0 ; 
}