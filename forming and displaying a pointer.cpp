//forming and displaying a pointer

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main(){
	//forming a pointer
	int *ptr;
	int ptr1;
	ptr1 = 21;
	ptr = &ptr1;
	//displaying pointer address
	cout<<"Pointer Address: "<< ptr << endl;
	//displaying pointer content
	cout<<"Pointer Content: "<< *ptr<< endl;
	getch();
	return 0;
}
