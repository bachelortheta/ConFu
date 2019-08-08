//this is lab 5

//options -> edit, delete, reverse

#include <conio.h>
#include <iostream>
#include <vector>
#include <math.h>
//#include <list>

using namespace std;

//node class
class node{
	public:
		node* _next;
		node* _prev;
		int _data;
};

//operation class
class list{
public:
list();
~list();
	void push(int x);
void centeradd(int y); //entering value in ccenter
	void pop();
	node* _front;
	node* _back;
	int _size;
};

//constructor
list::list(){
	_front = NULL;
	_back = NULL;
	_size = 0;
}

//destructor
list::~list(){
	;
}

//using doubly link list
//creating three nodes
void list::push(int x){
	if(_size==0){
		_front = new node;
		_front->_data = x;
		_front->_prev = NULL;
		_front->_next = NULL;
		_back = _front;
		cout << "Pushed Value: " << _front->_data << endl;
	} else if(_size!=0){
		node* temp = new node;
		_back = temp->_prev;
		temp->_prev = _back->_next;
		_back->_next = NULL;
		_back->_data = x;
		 cout << "Pushed Value: " << _back->_data << endl;
	}
	
	++_size;
}



//creating a node and adding it to center
void list::centeradd(int y){
	node* mid = new node;
	node* temp1 = new node;
	mid = _front->_next;
	mid->_prev = _front->_next;
	mid->_next = _back;
	mid->_data = y;
	cout << "Pushed Center Value:" << mid->_data << endl;
	}


int main(){
	int a,b;
	list p1;
	cout << "Enter the value you want: "; cin >> a; cout << endl;
	p1.push(a);
	cout << "Enter the mid value: "; cin >> b; cout << endl;
	p1.centeradd(b);
	getch();
	return 0; 
}
