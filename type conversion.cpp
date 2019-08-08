#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

main(){
	
	int a;
	
	cout << " What is a: "; cin >> a;
	cout << endl;
	
	//time to change type
	
	a = static_cast<char>(a);
	
	cout << " What is value of a: "; cin >> a;
	cout << endl;
	
	getch();
	
	return 0;
	
}
