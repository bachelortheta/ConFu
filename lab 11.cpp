//lab 11

//headers
#include <conio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
	//enter the number of values
	int n; //number of elements of array
	cout << "Enter no of elements: "; cin >> n; cout << endl << endl;
	int i; //loop iteration value
	int array[n];
	int j;
	
	for (j=0;j<=n;j++){
		cout << "Enter array value:"; cin >> array[j]; cout << endl << endl; 
	}
	
	int temp;
	//loop formation
	for(i=0;i<=n-1;i++){
		if(array[i]>array[i+1]){
		temp = 0;
		temp = array[i];
		array[i] = array[i+1];
		array[i+1] = temp; 
	};
}
	
	//displaying the elements
	int q;
	for(q=0;q<=n;q++){
		cout << array[q] << endl;
	}
	
	getch();
	return 0;
}
