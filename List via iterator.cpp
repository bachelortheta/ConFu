//this is list program with iterator

#include <iostream>
#include <conio.h>
#include <vector>
#include <iterator>
#include <math.h>
#include <string>
using namespace std;

//class 
class iv{
	public:
		iv(); //implicit constructor
		~iv(); //destructor
		void insert1(); //list enter data
		void insert2(); //list enter data
		void remove(); //removing item
		void show(); //display
		vector<string> list;
		int i;
};

//constructor
iv::iv(){
	
;}

//destructor
iv::~iv(){
	;
}

//insert1
void iv::insert1(){
	list.push_back("sugar");
	list.push_back("wheat");
	list.push_back("dates");
	list.push_back("rice");
	list.push_back("salt");
}

//insert2
void iv::insert2(){
	list.insert(list.begin()+1,"Tea");
}

//removing
void iv::remove(){
	cout << "Dates Removed " << endl << endl;
	list.erase(list.begin()+3);
}

void iv::show(){
	cout << "Data in list is as: " << endl << endl;
	for(i=0; i!=list.size();i++){
		cout << list[i] << endl;
	} 
}


//main-calling program
int main(){
	iv p1;
	p1.insert1();
	p1.show();
	p1.insert2();
	p1.remove();
	p1.show();
	getch();
	return 0;
}
