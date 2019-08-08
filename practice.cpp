//practice

#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
main(){
	char a[]="bad boy";
	char *b[sizeof(a)];
	int i;
	for(i=0;i<=sizeof(a);i++){
		b[i] = &a[i];
		cout<<"Address of a["<<i<<"]=" << &b[i]<<endl;
		cout<<"Content of a["<<i<<"]="<< *b[i]<<endl<<endl;
	}
	getch();
	return 0;
}
