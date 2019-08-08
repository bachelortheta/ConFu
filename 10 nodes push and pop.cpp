//this is pushing and popping 10 entries in queue format

#include <iostream>
#include <conio.h>
using namespace std;

class node{
	public:
	int _data;
	node* _next;
};

class queue{
	node* _front;
	node* _back;
	int _size;
	public:
		queue(); //ye front back ko initialize karayga
		~queue();
		void push(int x);
//		void pop();
//		int size();
//		int front();
//		int back();
};

queue::queue(){
	_front = _back = NULL;
	_size = 0;
}

queue::~queue(){
	while(_size!=0){
		node* temp = _front;
		_front = _front->_next;
		delete temp;
		--_size;
	}
}

void queue::push(int x){
	if(_size==0){
	_front = new node;
	_front->_data = x;
	_front->_next = NULL;
	_back = _front; //yahan bs ye bta raha hun k front ab _back ko point karayge
//_back = _front->_next;
//	_front->_next = _back;
	cout << _front->_data;
	++_size;
	
}
 else
{ node* temp = new node;
_back->_next = temp;
temp->_data = x;
temp->_next = NULL;
cout << temp->_data;
}
}



int main(){
	queue p1; //object created
	int x=2;
	for(x=2;x<10;x++){
		cout << "Pushed Value is:  "; p1.push(x); cout << endl;              
	}
	
	getch();
}
