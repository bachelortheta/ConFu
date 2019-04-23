

#include <conio.h>
#include <iostream>

using namespace std;

//class
class person1{
	private:
		double feet;
		double inch;
		
		public:
			person1(double f, double p){
				
				feet = f;
				inch = p;
			}
			
			person1(const &person1);
			
			//now make display function
			
			display(){
				
				cout << "Person 1 height =" << feet << " ft " << inch << endl;
			}
			
			//assignment operator overload
			person1 operator = (const person1 &D){
				
				feet = D.feet;
				inch = D.inch;
				
			}
			
			~person1(){
			};
			
			double ft(){
				cout << "Feets= " << feet;
			}
			
			double in(){
				cout << "Inches= " << inch;
				
			}
};

    int main(){
    	
    	person1 p1(0,0);
    	p1.display();
    	person1
		 p2(2.2,3.4);
    	p1 = p2;
    	p1.display();
    	p1.ft();
    	p1.in();
    	
    	return 0;
    	
	}
