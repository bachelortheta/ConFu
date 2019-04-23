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
		
	akita(){
		
		cout << "System is activated" << endl;
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
	
	~akita(){
		
		cout << "System is deactivated" << endl;
	} 
};


int main(){
	
	string name;
	
	akita obj1;
	
	cout << "Enter Name: "; cin >> name; cout << endl;
	
	cout << "Enter Pass: "; obj1.pass(); cout << endl;
	
	return 0;

}

