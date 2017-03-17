#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
char choice = 'Y';
int val = 0, k = 0, option = 0;

while (choice = 'Y') {
	cout << "--------Menu--------" <<endl;
	cout << "[1]Add a value" << endl;
	cout << "[2]Remove a value" << endl;
	cout << "[3]Clear list" << endl;
	cout << "[4]Request value at position" << endl;
	cout << "[5]Display list size" << endl;
	cout << "[6]Display list contents"<<endl;
	
	cin >> option; 

	if (option == 1) {
		cout << "What value would you like to insert?"<<endl;
		cin>> val;
		cout << "At what position would you like to insert this value"<<endl;
		cin >> k;
		L1.insert(val,k);}
	else if(option == 2) {
		cout << "At what position would you like to remove value?"<<endl;
		cin >> k;
		L1.remove(k);}
	else if(option == 3) {
		L1.clear();
		}
	else if(option == 4) {
		cout << "Enter a position" << endl;
		cin >> k;
		L1.getAt(k);
		}
	else if(option == 5) {
		L1.size();
		}
	else if(option == 6) {
		L1.display();
		}
cout << "[1] Return to menu" << endl;
cout <<" [2] Exit" << endl;
cin >> option;

if (option == 1) {
	choice = 'Y'; 
}
else {
	choice = 'N';
}
}

return 0;

}
