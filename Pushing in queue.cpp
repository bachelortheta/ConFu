//this is to push data in queue

//headers
#include <conio.h>
#include <iostream>
using namespace std;

//node class
class node{
	public:
		int _data;
		node* _next;
};

//queue class
class queue{
	public:
		queue();
		~queue();
		int size();
		bool empty();
		int front();
		int back();
		void push(int x);
		void pop();
		
		private:
			node* _front;
			node* _back;
			int _size;
};

//Constructor ne srf value ko initialize karna hai
queue::queue(){
	_front = _back = NULL;
	_size = 0;
}

//destructor ne tasalli k liye sab nodes ko delete karna hai
queue::~queue(){
	while(_size!=0){
		node* temp = _front;
		_front = _front->_next;
		delete temp;
		--_size;
	}
}

//size function ne btana hai k size kitna hai queue ka
int queue::size(){
	return (_size);
}

//empty function ne size ko zero kar ke return karna hai
bool queue::empty(){
	return (_size==0);
}

//isne btana hai k queue k start me konsa data hai
int queue::front(){
	return (_front->_data);
}

//back function ne btana hai k last pe konsa data para hai
int queue::back(){
	return (_back->_data);
}

//push function ne user se li hui value ko insert krna hai node ke data me
void queue::push(int x){
	if(_size==0){     //agr size zero hai tou matlab queue empty hai, tou pehla _front hoga node
		_front = new node;
		_front->_data = x;
		_back = _front;    
		_front->_next = _back;
		cout << "Pushed value = " << _front->_data << endl;
		_size++;
	}
	else{
		
		node* temp = new node;
		_back->_next = temp;
		temp->_data = x;
		temp->_next = NULL;		
		cout << "Pushed value = " << temp->_data << endl;
	}
	
}

void queue::pop(){
	if (_size==0){
		cout << "Pop value = " << _front->_data << endl;
	}
	else { 
	node* temp1 = _front;
	_front = _front->_next;
	cout << "Pop value = " << temp1->_data << endl;
	delete temp1;
	};
}


main(){
	int x = 2;
	queue p1;
	p1.push(x);
	p1.push(5);
	p1.pop();
	cout << "Front value " << p1.front() << endl;
//	p1.back();
	getch();
}
