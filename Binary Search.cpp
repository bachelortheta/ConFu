#include <iostream>
#include <conio.h>
using namespace std;
int linear(){
	int x;
	int y;
	int i;
	int j;
	int k;
	int l;
	int beg;
	int end;
	float mid;
	
	cout << "Enter the No. of values: "; cin >> y; cout << endl;
	cout << "Enter the value you want to find: "; cin >> x; cout << endl;
	
	//array declaration
	int array[y];
	
	//beginning and end values
	int a,z;
	
	//array formation and storing values in array
	 //loop will be used
	 for(i=0;i<=y;i++){
	 	
	 	cout << "array[" << i << "]="; cin >> array[i]; cout << endl;
	 }
	 
	 //finding mid value of an array
	 beg = array[0];
	 end = array[y];
	 mid = array[y/2];
//	 mid = 0;
//	 for(k=0;k<=y;k++){
//	 	mid = mid + array[k];
//	 }
	 
//	 cout << "Middle Value: " << (mid/2) << endl;
	 cout << "Middle Value: " << mid << endl;
	 
	 //for binary search two arrays are required
	  //moving from array[0] to array[mid]
	  for(j=0;j<=(y/2);j++){
	  	if(x==(array[j])){
	  		cout << "From array["<<j<<"] to array["<<(j/2)<<"] = " << "Found" << endl; break;
		} else if(x!=(array[j])){
			continue; 
		}
	  }
	  //moving from array[mid] to array[end]
	  	  for(l=(y/2);l>=0;l--){
	  	if(x==(array[l])){
	  		cout << "From array["<<(l/2)<<"] to array["<<(l)<<"] = Found" << endl; break;
		} else if(x!=(array[l])){
			cout << "From array["<<(l/2)<<"] to array["<<(l)<<"] = Not found "<< endl; break; 
		}
	 
	 
};
}

int main(){
	linear();
	getch();
	return 0;
}
