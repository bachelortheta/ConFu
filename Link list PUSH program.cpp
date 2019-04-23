//pushing user defined value in queue

#include <conio.h>
#include <iostream>
#include <vector>
using namespace std;

class node{
	public:
		int data;
		node* next;
};

class pushing{
	public:
		pushing(); //constructor
		~pushing(); //destructor 
		void push(int x); //inserting value
		
		node* front;
		node* back;
};

pushing::pushing(){
;};

pushing::~pushing(){;
};

void pushing::push(int x){
	node* temp = new node;
	temp->data = x;
	temp->next = NULL;
	if (front==NULL){ *front = *back = *temp; 
	back->next = NULL;
	cout << "empty";
	} else
	{ back->next = temp;
	back = temp;
	back->next = NULL;
	cout << "Pushed data and pointer: " << temp->data <<", " << temp->next << endl;
	};
}

int main(){
	pushing p1;
	int x;
	cout << "Enter value of x: "; cin >> x ; cout << endl;
	p1.push(x);
	
	getch();
	return 0;
}
