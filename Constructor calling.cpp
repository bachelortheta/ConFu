//this program is for constructor
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

//class
class student{
	string name;
	int age;
	int number;
	
	public:
		//enter constructor that will ask for input
		student(); //implicit constructor because no parameter
		student(string a, int b, int c); //explicit constructor because parameters
		void input();
		void display();
};

//ye input function ki definition hai
void student::input(){
	cout << "Enter Name: "; 
	cin >> name; cout <<endl;

    cout << "Enter Age: "; 
	cin >> age; cout <<endl;
	
	cout << "Enter Number: "; 
	cin >> number; cout << endl;	
}

//ye display function ki definition hai
void student::display(){
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Number: " << number << endl;
}

//ye implicit function ki definition hai
student::student(){
	
	input();
	display();
}

//ye explicit ki definition hai
student::student(string a, int b, int c){
	
	name = a;
	age = b;
	number = c;
	
	display();
}

main(){
	
	student s1; //ye us constructor ko call karega jo implicit hai
	student s2("Ali",23,91); //ye explicit constructor ko call kare ga
	getch();
	return 0;
}
