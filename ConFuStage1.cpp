//Structure program for C++

//header
#include <conio.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>

//standard library
using namespace std;

//Structure \
User defined data type that can hold more then one property of data type is structure\
Making a structure
struct userid { //structure is made with name userid
	
	string name;
	
	int age;
	
};

//main body
int main(){
	
	//Name of persons
	userid name1; //variable name1 is created userid type ka where userid data type is combo of \
	string and data type so any of both can be entered later on.
	userid name2;
	
	//age of persons
	userid age1;
	userid age2;
	
	cout << "Enter Name of Person1: "; cin >> name1.name; cout << endl;
	cout << "Enter Age of Person1: "; cin >> age1.age; cout << endl;
	cout << "Enter Name of Person2: "; cin >> name2.name; cout << endl;
	cout << "Enter Age of Person1: "; cin >> age1.age; cout << endl;
	
	getch();
	
	return 0;	
	
}
