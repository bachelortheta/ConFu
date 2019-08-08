//this is line class program
//slope line form m=(y2-y1)/(x2-x1)+c will be used
#include <conio.h>
#include <iostream>
using namespace std;
class line{
	private:
		int x1, x2;
		int y1, y2;
		int a, b;
		public:
			line();
			line(int o, int p, int q, int r);
			~line(){;
			};
			void input();
			void display1();
			void display2();
			void show();
};

line::line(){;
}

line::line(int o, int p, int q, int r){
	x1 = o;
	y1 = p;
	x2 = q;
	y2 = r;
}

void line::input(){
	cout << "Enter x1: " ; cin >> x1; cout << endl;
	cout << "Enter y1: " ; cin >> y1; cout << endl;
	cout << "Enter x2: " ; cin >> x2; cout << endl;
	cout << "Enter y2: " ; cin >> y2; cout << endl;
}

void line::display1(){
	cout << "x1= " << x1 << endl << endl;
	cout << "x2= " << y1 << endl << endl;
	cout << "y1= " << x2 << endl << endl;
	cout << "y2= " << y2 << endl << endl;
}

void line::display2(){
    b = y2-y1;
    a = x1-x2;
    cout << endl;
}

void line::show(){
	
	cout << "ax+by+c= " << a << "x + " << b << "y + c" << endl;
}

int main(){
	line o1;
	o1.input();
	o1.display1();
	o1.display2();
	o1.show();
	getch();
	return 0;
	}
