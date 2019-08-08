//Doubly linked list

#include <conio.h>
#include <iostream>
#include <stack>
#include <math.h>
#include <vector>
#include <queue>
using namespace std;

//making a node
class node{
	public:
		int _data;
		node* _next;
		node* _prev;
};

//making a doubly
class list{
	public:
		//declaring functions
		list(); //constructor
		~list(); //destructor
		int size(int _size); //display size
		int first(); //first data
		int last(); //last data
		void push(); //inserting value
//		void pop();  //removing value
		
		node* head;
		node* tail;
		int _size ;
		int end;
		int x,y;
};

//Defining functions

//constructor
list::list(){
	head = NULL;
	tail = NULL;
	_size = 0;
	end = 2;
}


//destructor
list::~list(){
	;
}

//display size
int list::size(int _size){
	cout << "Size of list: " << _size << endl;
}

//first data
int list::first(){
	cout << "First value: "; cout << (head->_data) << endl;
}

//last data
int list::last(){
	cout << "Last value: "; cout << (tail->_data) << endl;
}

//inserting data
void list::push(){
	
	while(_size!=end){
	
	if(_size==0){
		cout << "Enter the value you want to push: " ; cin >> x ; cout << endl;
		head = new node;
		head->_prev = NULL;
		head->_data = x;
		head->_next = tail;
		tail = head; 
		cout << "Pushed Value is: " << head->_data << endl;
	;}
	
	else if(_size!=0){
		cout << "Enter the value you want to push: " ; cin >> y ; cout << endl;
		node* temp = new node;
		temp->_prev = tail;
		tail->_next = temp;
		temp->_next = NULL;
		temp->_data = y;
		cout << "Pushed value: " << tail->_data << endl;
		
	;}
	++_size;
	;}
}

//main call
int main(){
	int _size;
	int p;
	cout << "Enter the size of list: "; cin >> _size; cout << endl;
	list p1;
	p1.size(_size);
	for(p=0; p<=_size;p++){
	p1.push();
}	
	p1.first();
	p1.last();
	getch();
	return 0;
}
