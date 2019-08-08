//this program is for push and pop.

//headers
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#define max 1000 //let max be the highest value in stack
#define min 0  //let min be the lowest value in stack
using namespace std;

//making a stack class
 //stack push and pull requires a max and min value present in a stack
class stack{
	private: 
	//initializing value to be indicatior
	int top; // this is done because we need something to declare push and pull
	int x;
	
	//public data
	public:
		//let first make a stack
		int array[5]; //no of values in a stack are 5
		stack(); //auto-run
		int push(int x); //insert element declared
		int pull(); //remove element declared
		
}; //class ended

//defining constructor
    stack::stack(){
    	top = -1; // -1 is taken because min value present in stack is 0;
    	          // this value depends k stack k kis element k saath hm deal kr rahay hain
    	}
    	
//defining push function
    int stack::push(int x){
    	//first see either stack is full or not
    	if(top>max){
    		cout << "Stack is overflow" << endl;
    		return 0;
		} else { array[++top] = x;
		}
		
		cout << " Pushed stack value = " << array[top] << endl;
	;}
	
//defining pull function
    int stack::pull(){ //is me koi pass is liye nhi kya because is ne remove krna hai add nahi karna
    	if(top<=min){
    		cout << "Stack is underflow" << endl;
    		return 0;
		} else { x = array[top--];
		return x;
		}
		
		cout << " Pulled Stack value = " << x << endl;
		
		;}
	    	
//lets make a main program
int main(){
	
	stack s1;
	stack s2;
	s1.push(20);
	s2.pull();
	getch();
	return 0;
}	    	
