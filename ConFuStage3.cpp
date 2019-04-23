//header
#include <conio.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <stdio.h>

//Use of recurrsion

//standard form
using namespace std;

////structure form
//struct structname{
//	
//	
//};

//user defined function
int fact(int n){
	
	//limitation,exceptional case
	if(n==0){return 1;
	}
	else return n*fact(n-1);
}

//main body
int main(){
 
 //variable
 int n;
 
 cout << "Enter value to find the factorial: "; cin >> n; cout << endl;
 
 //calling factorial function
 cout << "Factorial of n: " << fact(n) << endl;	
 
	
	getch();
	
	return 0;
	
}
