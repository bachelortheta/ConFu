//usage of a structure

//headers
#include <iostream>
#include <conio.h>
#include <math.h>

//standard
using namespace std;

//ThisProgramIs for name, age, phoneNumber
//structureMaking
struct ID{
	string name;
	int age;
	int Phone;
};

//Main
main(){
	//using a structure
	ID ID1;
	ID ID2;
	ID ID3;
	cout << "Name of person: "; cin >> ID1.name; cout << endl;
	cout << "Age of person: "; cin >> ID2.age; cout << endl;
	cout << "Phone of person: "; cin >> ID3.Phone; cout << endl;
	getch();
	
	return 0;
}
