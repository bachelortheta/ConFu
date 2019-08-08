//pointers for array

#include <iostream>
#include <conio.h>
using namespace std;
main(){
	char *arr;
	char array[]="good";
	arr = array;   //arr = &array;
	//showing addresses using pointers
	int i;
	for(i=0;i<3;i++){
//		cout << "Address of array["<<i<<"]="<< arr + i<<endl;     //array[0+i]
		cout << "Content of array["<<i<<"]="<< *arr + i<<endl;
	}
	
	getch();
	return 0;
}


