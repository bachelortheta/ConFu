//list info of a student

#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

class student{
	string name;
	int age;
	int PN;
	
	//ab student ki properties ko kaha kaha use karna
	
	public:
		
		//student se pucho
		void input(){
			
			cout << "Enter Name: ";  getline(cin,name);
			cout << endl;
			cout << "Enter Age: ";  cin >> age;
			cout << endl;
			cout << "Enter Phone Number: ";  cin >> PN;
			cout << endl;
			
		}
		
		//ab show karwana hai in properties ko
		
		void display(){
			cout << name << endl;
			cout << age << endl;
			cout << PN << endl;
		}
};

main(){
//uper kuch bhe access krne k liye mujhay object bnana zrori hai so
student s1;
s1.input();
s1.display();

getch();
return 0;
;}
