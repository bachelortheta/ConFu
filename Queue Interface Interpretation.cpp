//Queue implementation
 //constructor
 //destructor
 //size
 //empty
 //front
 //back
 //push
 //pop
 
 #include <conio.h>
 #include <iostream>
 using namespace std;
 
 //queue
 class queue{
 	public:
 	queue();
 	~queue();
 	int size();
 	bool empty();
 	int front();
 	int back();
 	void push(int x);
// 	void pop();

//node
 class node{
 	public:
 	int _data;
 	node* _next;
 };

node* _front;
node* _back;
int _size;
 };
 
 queue::queue(){
 	_front = 0;
 	_back = 0;
 	_size = 0;
 }
 
 queue::~queue(){
 	while(_size != 0){
 	node* temp = _front;
 	_front = _front->_next;
 	delete temp;
	 --_size;
	 };
 }
 
 int queue::size(){
 	return (_size);
 }
 
 bool queue::empty(){
 	return(_size==0)
	 ;}
 
 int queue::front(){
 	return (_front->_data )
;}
 
 int queue::back(){
 	return (_front->_data );
}

void queue::push(int x){
	if(_size==0){
		_front = new node;
		_front->_data = x;
		//_front->_next = NULL;
		_back = _front;
		//_front -> _next = _back;
		cout << "Pushed Value: " << _front->_data << endl;
		++_size;
	}
	else {
		node* temp = new node;
		_back->_next = temp;
		temp->_data = x;
		temp->_next = NULL;		
		cout << "Pushed Value: " << temp->_data << endl;
	};
}

 main(){
 	int x = 2;
 	int y = 5;
	queue p1;
//	p1.size();
//	p1.empty();
	p1.push(x);
	p1.push(y);
//	p1.front();
//	p1.back();
	getch();
}
