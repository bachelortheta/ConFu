//Queue Dynamic memory allocation

//headers
#include <conio.h>
#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

//defining simple node concept, node includes data and address
class node{
	public:
		int data;
		node *next;
};

//class define and functions declare kr raha idher
class queue{
	public:
		queue();
		~queue();
		void push(int a);
		void display();
		bool empty();
		
		//ye 2 pointers is liye use kiye hain q k hamne node k liye address laazmi chahiye hota
		node *front;
		node *back;
		
};

//constructor me ham sb pointers ko null define karaingy 
queue::queue(){
	front = back = NULL;
}

//destructor me pura tabha kr dena hai queue ko
queue::~queue(){
	while(front==NULL){
		node *temp = new node;
		front->next = temp;
		temp->next = NULL;
		delete temp;
	};	
}

//push krne k liye "NEW" operation use karna hai
void queue::push(int a){
	node* temp = new node;
	temp->data = a;
	if(front==0){
		front = back = NULL;
		cout << "Data: " << temp->data << endl;
	} else
	{
		back->next = temp->next;
		back->data = temp->data;
		back = temp;
		temp->next = NULL;
		cout << "Data is: " << back->data << endl;
	}
}

main(){
	queue p1;
	int a;
	//ider limit set kr rahay hain k agar ye value enter ki tou queue empty show hoga 
	cout << "Enter Alpha: "; cin >> a; cout << endl;
	if(a==-9){cout << "Queue is empty" << endl;
	} else {
	p1.push(a); }
	getch();
	return 0;
}
