#include <iostream>
using namespace std;


void showMenu(){
	cout <<"1. Search" << endl;
	cout <<"2. View Record" << endl;
	cout <<"3. Quit" << endl;
	
}

int getinput(){
	cout <<"Enter selection: " << endl;
	
	int input;
	cin >> input;
	
	return input;
	
}
void processeslection(int option){
	switch(option){
		case 1:
			cout <<"Searching..." << endl;
			break;
		case 2:
			cout <<"Viewing..." << endl;
			break;
		case 3:
			cout <<"Quitting..." << endl;
			break;
		default:
			cout <<"Please select on item from the menu." << endl;		
	}
}

int main(){
	
	showMenu();
	int selection = getinput();
	processeslection(selection);

	
	
	return 0;
	
	
}
