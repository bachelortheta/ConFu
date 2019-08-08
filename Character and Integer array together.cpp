//practice

#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
main(){
	int *arr;
	char *ars;
	char arras[]="kami";
	ars = arras;
	int array[5]={5,4,3,2,1};
	arr = array;
	int i;
	for(i=0;i<5;i++){
		cout << "Address of array["<<i<<"]="<<arr+i<<endl;
		cout << "Content of array["<<i<<"]="<<array[i]<<endl<<endl;
		cout << "address of char["<<i<< "]="<<ars+i<<endl;
	}
	getch();
	return 0;
}
