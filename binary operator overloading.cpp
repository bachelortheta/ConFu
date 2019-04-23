//this program is for binary opertor

#include <conio.h>
#include <iostream>
using namespace std;

class kamran{
	private:
		int a1;
		int b1;
		int c1;
    public:
    	kamran(); //implicit
    	kamran(int a, int b, int c){
		a1 = a;
		b1 = b;
		c1 = c;}; //explicit
    	kamran operator + (kamran y); //declared
    	void display(); //declared
    	//~kamran(); //declared
};

//definition of implicit
kamran::kamran(){;
}

//display
void kamran::display(){
	cout << "a1= " << a1 << endl;
	cout << "a2= " << b1 << endl;
	cout << "a3= " << c1 << endl;
}

//definition of + operator
kamran kamran::operator + (kamran y){
	kamran temp;
	temp.a1= this->a1+y.a1;
	temp.b1= b1+y.b1;
	temp.c1= c1+y.c1;
	return temp;
}

int main(){
	kamran x(1,2,3);
	kamran y(4,5,6);
    x.display();
    y.display();
    kamran z;
    z = x + y;
    z.display();
	getch();
    return 0;
}
