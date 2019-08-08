//Point class 2 for perfection

#include <conio.h>
#include <iostream>

//
using namespace std;

//class 
class point {
	private:
		double xline;
		double yline;
		
		public: 
			point(double f, double p){ //definition of default 
				xline = f;
				yline = p;
			}
			
			//new object bna kr value assign karo
			//uske liye operator overloading chalti hai
			
			
			point operator = ( const point &D){
				
				xline = D.xline;
				yline = D.yline;
			}
			
			
			display(){
				cout << xline << "," << yline << endl;
			};
			
			axis(){
				cout << " x ki value = " << xline << endl;
				cout << " y ki value = " << yline << endl;
			};
			
			
			~point(){
			};		
};

       int main(){
       	
       	point p1(2.2,2.3);
       	p1.display();
       	p1.axis();
       	point p2(2.5,3.9);
       	p1 = p2;
       	p1.display();
       	p1.axis();
       	
       	return 0;
	   }
	   
