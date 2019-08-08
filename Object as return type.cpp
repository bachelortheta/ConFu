//program to introduce object as return type
#include <conio.h>
#include <iostream>
using namespace std;

//compare price of two books and show smaller one

class book{
	private:
		int price;
		int pages;
		
	public:
		book(); //implicit declared
		book(int a, int b); //explicit declared
		void display(); //display declared
		book compare(book x, book y); //comparing declared
		void show(); //final declare
		~book(); //destructor declared
}; //class ended

    //definition of implicit
    book::book(){
    	cout << "Information is recored" << endl << endl;
	}
	
	//definition of explicit
	book::book(int a, int b){
		price = a;
		pages = b;
	}
	
	//definition of display 
	void book::display(){
		
		cout << "Information is as: " << endl << "Price: " << price << endl << "Pages: " << pages << endl;
	}
	
	//definition of comparing
	book book::compare(book x, book y){
		if(x.price>y.price)
		return x;
		else return y;
	}
	
	//definition of show
	void book::show(){
		cout << "Price of most costly book = " << price << endl;
	}
	
	//definition of destructor
	book::~book(){
		;
	}
	
	int main(){
		
		book b1(100,200);
		book b2(200,300);
		book b3;
		b1.display();
		b2.display();
		book b4 = b3.compare(b1,b2);
		b4.show();
		getch();
		return 0;
		
	}
