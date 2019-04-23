//Pointer array
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main(){
	int *ptr;
	int ptr1[3] = {21,22,23};
	ptr = &ptr1[3];
	cout<<"Address of first element with &: "<< ptr1<<endl;
	cout<<"Address of first element without &: "<<&ptr1<<endl;
	cout<<"Content of first element =  "<< ptr1[0]<<endl;
	cout<<"Content of 2nd element =  "<< ptr1[1]<<endl;
	getch();
	return 0;
}
