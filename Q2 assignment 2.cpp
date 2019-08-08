#include <conio.h>
#include <iostream>
#include <iterator>
#include <vector>
#include <string>
using namespace std;

//template <class x>
main(){
//making a list of sugar, wheat, dates, rice, salt
vector<string> mylist;
mylist.push_back("Suger");
mylist.push_back("Wheat");
mylist.push_back("Dates");
mylist.push_back("Rice");
mylist.push_back("Salt");
cout << "List of items are following: " << endl << endl;

//display items of mylist
for(int i=0; i != mylist.size(); i++){
	cout << "item " << i << " =" << mylist[i] << endl << endl;
}

//insert value after suger
mylist.insert(mylist.begin()+1,"Tea");
//display the items again.
cout << endl << endl;

cout << "List of updated items are following: " << endl << endl;
//display items of mylist
for(int i=0; i != mylist.size(); i++){
	cout << "item " << i << " =" << mylist[i] << endl << endl;
}

//removing dates from list
mylist.erase(mylist.begin()+3);

cout << endl << endl;

//list of updated items
cout << "List of updated items are following: " << endl << endl;
for(int i=0; i != mylist.size(); i++){
	cout << "item " << i << " =" << mylist[i] << endl << endl;
}

getch();
return 0;
;}
