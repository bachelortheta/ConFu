//friend function program
#include <conio.h>
#include <iostream>
using namespace std;

class lighter{
	private: 
	int price;
	int label;
	int color;
	
	public:
		//implicit 
		lighter();
		//explicit
		lighter(int a, int b, int c);
		//lets make display friend function
		friend void display(lighter a);
		~lighter(); //destructor declared
		
};

    //implicit
    lighter::lighter(){
    	
    	cout << "lighter taken" << endl;
    	
	}
	
	//explicit
	lighter::lighter(int a, int b, int c){
		
		price = a;
		label = b;
		color = c;
	}
	
	void display(lighter a){
		
		cout << " Price: "  << a.price << endl;
	}
	
	lighter::~lighter(){
		;
	};
	
	main(){
		lighter l1(100,200,300);
		display(l1);
	}
