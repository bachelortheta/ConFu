#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
class point{
	
	private: 
	int x;
	int y;
	
	public:
		setdata(int a, int b){
			x = a;
			y = b;
		}
		
		showdata(){
			cout << "x+iy = "<< x << "+i"<< y<<endl;
		}
		
		point operator+(point c){
			point temp;
			temp.x = x+c.x;
			temp.y = y+c.y;
			return (temp);
		}
};

main(){
	point c1,c2,c3;
	c1.setdata(2,3);
	c2.setdata(4,5);
	c3 = c1 + c2;
	c3.showdata();
	getch();
	return 0;
}
