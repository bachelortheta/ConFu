//+ overoading

#include <conio.h>
#include <iostream>
using namespace std;

class original{
	private:
		int a1;
		int b1;
		int c1;
		
		public:
			original(){
			};
			original(int a, int b, int c){
			a1 = a;
			b1 = b;
			c1 = c;
			};
			void display();
			original operator + (original k2);
			~original(){;
			};
};



void original::display(){
	cout << "a1= " << a1 << endl << endl;
	cout << "a2= " << b1 << endl << endl;
	cout << "a3= " << c1 << endl << endl;
}

original original::operator + (original k2){
	original temp;
	temp.a1 = this->a1 + k2.a1;
	temp.b1 = this->b1 + k2.b1;
	temp.c1 = this->c1 + k2.c1;
	return temp;
}


int main(){
	
	original k1(1,2,3);
	k1.display();
	original k2(2,3,4);
	k2.display();
	original k3;
	k3 = k1 + k2;
	k3.display();
	getch();
	return 0;
}
