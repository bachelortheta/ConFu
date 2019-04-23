//simple iterator program by vector concept

#include <conio.h>
#include <iostream>
#include <math.h>
#include <iterator>
#include <vector>
#include <string>
using namespace std;


int main(){
//creating a vector : format -> vector<dt> vname
vector <int> list;
list.push_back(23);
list.push_back(24);
list.push_back(99);
for(int i= 0; i <list.size();i++){
	cout << list[i] << endl;
}
getch();
return 0;
;}
