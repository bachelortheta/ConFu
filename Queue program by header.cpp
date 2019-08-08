//this is queue program by header 

#include <conio.h>
#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<int> profile;
	profile.push(21);
	profile.push(34);
	profile.push(56);
	cout << "This is queue" << endl << endl;
	cout << "Size of queue is: " << profile.size() ; cout << endl << endl;
	cout << "Name of person: "<< profile.front() <<" "<< profile.back() ; cout << endl;
	getch();
	return 0;
}
