//pointers with changing pointer value
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main(){
	int *ptr;
	int ptr1;
	ptr1=3;
	ptr=&ptr1;
	cout<<"pointer ka pehla content= "<<*ptr<<endl;
	*ptr*=2;      //(pointer ptr content is now multiplied by 2.54 and then feeded into ptr content place)
	cout<<"Pointer ka new content= "<<*ptr<<endl;
	getch();
	return 0;
}
