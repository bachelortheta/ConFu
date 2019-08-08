//static function

#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

class book{
	private:
		int price;
		int pages;
		string author;
		
	public:
	    book(); //constructor implicit declared	
	    book(int a, int b, string c); //contructor explicit declared
	    static void display(); //static function declared
	    ~book(); //destructor declared
};

    //defining implicit
    book::book(){
    	cout << "Object created" << endl;
	}
	
	//defining explicit
	book::book(int a, int b, string c){
		price = a; //assigned
		pages = b; //assigned
		author = c; //assigned
	}
	
	//defining static function
	void book::display(){
		
		
		cout << "Static Function is successfully done" << endl;
	}
	
	//defining destructor
	book::~book(){
		
		cout << "Object Destroyed" << endl;
	}
	
	int main(){
		
		book b1;
		book b2(10,20,"kami");
		book::display();
		
		getch();
		
		return 0;
	}
