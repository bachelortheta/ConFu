//Program to find target value in an array

//headers
#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;

//function calling target found

main(){
	
	//formation of an array	
	//storing values in an array
	 //storing is done using for loop
	   //to run for loop need integer
	    //integer limit create karay ga
	     int a=0; //starting value
	     int i; //ending value of number of members
	     //entering value of i
	     cout << "Enter number of values of an array: "; cin >> i; cout << endl;
	     int array[i];
	     for(a=0;a<=i;a++){
	     	
	     	cout << "array[" << a << "]= " ; cin >> array[a] ; cout << endl;
		 } //loop ended
		 
	//now we have to find max value, so create a temp data member
	int temp; //temp data
	//we need to compare each value of array so for loop is required
	int p; //it is variable which we pass in array loop
	for(p=0; p<=i;p++){
		
		if(array[0]<array[p]){
			
			temp = array[0];
			array[0] = array[p];
			array[p] = temp;
		}
	}
	 
	 cout << "Maximum Value: " << array[0] << endl;
	 
	 int q;
	 for(q=0; q<=i;q++){
		
		if(array[0]>array[q]){
			
			temp = array[0];
			array[0] = array[q];
			array[q] = temp;
		}
	}
	
	cout << "Minimum Value: " << array[0] << endl;
	 
	 getch();
	 
	 return 0;
	 
	 	 
}
