//destructor program
//display default copy constructor also
#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

//class
class make{
	private:
		int day;
		int month;
		int year;
		
	public:
		//idher destructor program hai tou construtor zrori hai
		make(); //declared constructor implicit
		make(int x, int y, int z); //declared explicit constructor
		void display(); //declared display function
		~make(); // destructor created
		}; //class ended
		
	make::make(){
		cout << "Object created" << endl << endl;
	}
	
	make::make(int x, int y, int z){
		day = x;
		month = y;
		year = z;
	}
	
	void make::display(){
		
		cout << "Date: " << day << ":" << month << ":" << year << endl << endl;
	}
	
	//time for destructor	
	make::~make(){
		cout << "Object Destroyed" << endl;
	}//class ended
	
	int main(){
		
		make s1;
		make s2(29,01,18);
		make s3(s2);
		s2.display();
		s3.display();
		getch();
		return 0;
	}//program ended
