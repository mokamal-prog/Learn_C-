#include <iostream> 
using namespace std; 
int main(){
  int price = 100;   // Declaring New variable in the porgram
  cout<<"Price is "<<price ; 
  price = 200 ;      // Assigning new value to the existed variable
  cout<<"\nThe new Price is "<<price ; 
  cout<<"\n"<<price;
  cout<<"\n================\n"; 
  string name; 
  name = "Mohamed Kamal Rady"; 
  cout<<name; 
  cout<<"\n================\n"; 
  int x,y,z; 
  x = 1 ; 
  y = 2 ; 
  z = 3 ; 
  cout<<x+y+z; 
  return 0; 
  
 }
  /*
    namespace : collection of identifiers(variables,functions and classes) , which helps to 
    sperrate these identifiers from thier similliars.
    e.g: 
    namespace Mohamed{
      int age = 20 ;
    }
    namespace Ahmed{
      int age = 22; 
    }
    std::cout<<Mohamed:: age;  // 20 
    std::cout<<Ahmed::age;      // 22 
  */