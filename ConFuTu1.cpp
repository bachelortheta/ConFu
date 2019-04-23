//ConFuTu1

//header
#include <conio.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>


//standard form
using namespace std;


//class making

class confutu{
	
	//access point
	public:
		int a;
		int b;
		int c;
		
	//constructor
		confutu(int x, int y){    //x and y are coming from main program
			
			a = x;
			b = y; 
			
			cout << "Constructor 1 is out" << endl;
		}
	
	//constructor2
	    confutu(int x){  //5 detected here
	    	a = x;
	    	
	    	cout << "Constructor 2 is out" << endl;
		}
		
	
};

//main body
int main(){
	
	confutu obj1(3,4); //this will go to class contructor 1
	
	confutu obj2(5); //5 will go to class constructor 2
	
	getch();
	
	return 0;
}
