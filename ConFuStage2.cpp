//header
#include <conio.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <string.h>

//standard
using namespace std;

//this is program to make the details of 2 cars.

//structure form

struct car{
	int price;
	
	string number;
	
	string name;
	
	string model;	
};

//main body
int main(){
	
	car car1; //car1 variable
	car car2; //car2 variable
	
	//car1 details
	cout << "Enter Car 1 Price: "; cin >> car1.price; cout << endl;
	cout << "Enter Car 1 Number: "; cin >> car1.number; cout << endl;
	cout << "Enter Car 1 Name: "; cin >> car1.name; cout << endl;
	cout << "Enter Car 1 Model: "; cin >> car1.model; cout << endl;
	
	//car2 details
	cout << "Enter Car 2 Price: "; cin >> car2.price; cout << endl;
	cout << "Enter Car 2 Number: "; cin >> car2.number; cout << endl;
	cout << "Enter Car 2 Name: "; cin >> car2.name; cout << endl;
	cout << "Enter Car 2 Model: "; cin >> car1.model; cout << endl;
	
	getch();
	
	return 0;
}

