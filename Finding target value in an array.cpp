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
		 
	//searching target value
	 //first enter target value
	 int j;
	 cout << "Enter target value: " ; cin >> j;
	 
	 //search requries for loop
	 int q;

	  //this nested loop is for Target found else break	
	  for(q=0; q<=i; q++){
	  	
	  	if(array[q]==j){ cout << "Targer found" << endl;
		  ;}
		else if ((array[q]!=j)){cout << "Not found" << endl;
		}  
		    
	  }
//	  for(r=0;r<=i;r++){
//	  	if((array[r]!=j)){cout << "Not found" ; break;
//		  } else break;
//	 ;}
	 //searching complete
	 
	 getch();
	 
	 return 0;
	 
	 	 
}
