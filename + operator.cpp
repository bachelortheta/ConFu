#include <conio.h>
#include <iostream>

using namespace std;

//class
class complex{
	private:
		double real;
		double imag;
		
		public:
			//default constructor 
			complex(double f, double p){
				
				real = f;
				imag = p;
				
				cout << "Real Part1 = " << real << endl;
				cout << "Imag Part1 = " << imag << endl;
				
			}
			
			complex complex :: operator + (const complex &c){
				
				complex result;
				result.real = this->real + c.real;
				result.imag = this->imag + c.real;
				
				return result;
				
			}
			
			//destructor
			~complex(){
			};
};


int main(){
	
	complex a(1,2);
	complex b(3,4);
	complex z = a + b;
	cout << z << endl;
	return 0;
}
