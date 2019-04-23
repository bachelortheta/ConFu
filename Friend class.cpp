//friend class program
//program to display input data of one class from other class output
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class car1{
	private:
		int tire_size;
		string color;
		int model;
		
	public:
	    car1(); //implicit declared
		void input(); //input function declared
		friend class car2;
			
};

car1::car1(){
	cout << "Car information analysing" << endl;
}


//defining of input
void car1::input(){
	cout << "Enter tire size: " ; cin >> tire_size ; cout << endl;
	cout << "Enter car color: " ; cin >> color ; cout << endl;
	cout << "Enter car model: " ; cin >> model; cout << endl;
}


class car2{
	public:
		
	static void display(car1 a){
		cout << "Tire size: " << a.tire_size << endl;
		cout << "Car model: " << a.color << endl ;
	}
};


int main(){
	
	car1 a1;
	a1.input();
	car2::display(a1); //here static is used, mtlab ye k class2 ke display
	 //function ko run karwaya hai, class1 k a1 object ki information pass kr ke
	
	getch();
	
	return 0;
}
