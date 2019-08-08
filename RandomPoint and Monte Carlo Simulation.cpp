#include <conio.h>
#include <iostream>

using namespace std;

class RandomPoint{
	private:
		double x1,x2,y1,y2;
		double x; //circle equation x
		double y; //circle equation y
		double z; //circle equation x2+y2;
		double p,q; //circle equation difference
		
		public:
//			RandomPoint(); //implicit 
			RandomPoint(double a,double b,double c, double d); //explicit
			~RandomPoint();
			void display(); //data show
			void sqaureEquation(); //taking square
			void compareEquation(); //for loop comparing and result
			void difference(); //differece equation
};



//explicit
RandomPoint(double a, double b, double c, double d){;
double x1 = a;
double x2 = b;
double y1 = c;
double y2 = d;
}

//data show
void RandomPoint::display(){
	cout << "X1= " << x1 << endl;
	cout << "X2= " << x2 << endl;
	cout << "Y1= " << y1 << endl;
	cout << "Y2= " << y2 << endl;
	
}

void RandomPoint::sqaureEquation(){
	z = (x^2)+(y^2);
	cout << "x^2 + y^2 =  " << z << endl;
}

void RandomPoint::compareEquation(){
	int hits=0;
	int total=1000;
	int i;
	for(i=0;i<=total;i++){
		if(z<=1){hits=hits+1;
		} else continue;
	}
	
	cout << "Pi = " << 4 * (hits/total) << endl;
} 

void RandomPoint::difference(){
	
	p = x2-x1;
	q = y2-y1;
	cout << "x= " << p << endl;
	cout << "y= " << q << endl;
}

main(){
	
//	RandomPoint p1;
	RandomPoint p2(1,4,5,2);
	p2.display();
	p2.difference();
	p2.squareEquation();
	p2.compareEquation();
	
	getch();
	
	return 0;
	
}
