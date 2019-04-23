//header
#include <conio.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>


//standard form
using namespace std;

//main body
int main(){
	
	
}


//structure form
struct structname{
	
	
};


//clas example and format together
using namespace std; 
class Geeks 
{ 
    // Access specifier 
    public: 
  
    // Data Members 
    string geekname; 
  
    // Member Functions() 
    void printname() 
    { 
       cout << "Geekname is: " << geekname; 
    } 
}; 
  
int main() { 
  
    // Declare an object of class geeks 
    Geeks obj1; 
  
    // accessing data member 
    obj1.geekname = "Abhi"; 
  
    // accessing member function 
    obj1.printname(); 
    return 0; 
} 
