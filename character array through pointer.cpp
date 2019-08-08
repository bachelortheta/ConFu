//to output given data from char array through pointer

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main(){
	int *a;
	int ab[2] = {23,24};
	a = &ab[2];
	cout<<"Address of char pointer=  "<<a<<endl;
	cout<<"Contents=  "<<*a<<endl;
	getch();
	return 0;
}
