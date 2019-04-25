//ConFuPro1

//headers
#include <conio.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>


//standard form
using namespace std;


//Akita DDoS Class
class akita{
	
	//security level
	//public for all functions so they can be called anywhere in the program
	public:
	
	//functions as algorithms
//	void userid();  string; --
//	void pass();    char, string --
//  constructor();  online --
//  ~destructor();	offline	
//  fibonancci working()  
		
	akita(){
		
		cout << "System is activated" << endl;
	}
	
	akita(int n){
		
		cout << "System is activated for module 2" << endl;
	}
	
//	void userid(string name){ //name comes from main driver
//		
//		string name1;
//		
//		name1 = name;
//		
//		return name1; 
//	}
	
	void pass(){
		
		char ch;
		
		string pass;
		
		ch = getch();
		
		while(ch!=13){ //13 is Enter in ASCII
			
			pass.push_back(ch);
			
			cout << "*";
			
			ch = getch();
			
		}
		
	}
	
	
	int fib(int n){    //n value will be passed by the user 
	//fibnonci is sum of 2 values in series 
	// it makes spiral like shape 
	
//	int nf;    // nf means next fibonanci series values
	int r;
	
	r = n; //coming n from main driver is assigned to r
	
	if(r==0 || r==1) return r;
	
	else
	
	{
		return fib(r-1)+fib(r-2);
	}
}
	
	~akita(){
		
		cout << "System is deactivated" << endl;
	} 
};


int main(){
	
	string name;
	
	akita obj1;
	
	cout << "Enter Name: "; cin >> name; cout << endl;
	
	cout << "Enter Pass: "; obj1.pass(); cout << endl;
	
	//driver for fibonanci
	int n;
	
	cout << "Enter n to find out fibonani"; cin >> n; cout << endl;
	
	akita obj2(n);
	
	cout << "Next fibonanici for the value n is: " << obj2.fib(n) << endl;
	
	return 0;

}
