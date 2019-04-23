//defining function outside class

#include <conio.h>
#include <iostream>
#include<string>

using namespace std;

//class 
class student{
	//properties ko private kro
		int age;
		string name;
		int pass;
	
	//properties kahan kahan use krni hai wo btao
	public:
		//pehlay input karni hain 
		//declaring inside
		void input();
		void display();
};

void student::input(){
	cout << "Enter age: "; cin >> age;
	 cout << endl;
	cout << "Enter name: "; cin >> name;
	 cout << endl;
	cout << "Enter pass: "; cin >> pass;
	 cout << endl;
}

void student::display(){
	
	cout << "Age: " << age<<endl;
	cout << "Name: " << name << endl;
	cout << "Pass: " << pass << endl;
	
}


//completed 

main(){
	
	student s1;
	s1.input();
	s1.display();
	
	getch();
	
	return 0;
}
