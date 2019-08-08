#include <iostream>
#include <conio.h>

using namespace std;

class addition {
	private:
		double d1, d2;
		
		public:
			addition(double p, double q){
				
				d1 = p;
				d2 = q;
			}
			
			
			showdata(){
				cout << "Value 1 = " << d1 << endl;
				cout << "Value 2 = " << d2 << endl;
			};
			
			
};

main(){
	
	 addition p0;
	 p0.addition(2,3);
	
	return 0;
	
	
}
