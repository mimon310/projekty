#include <iostream>
using namespace std;

int main(){
	
	int values[3];
	
	values[0] = 88;
	values[1] = 123;
	values[2] = 7;
	
	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;
	
	
	cout << "---------------------------------" << endl;
	
	double numbers[4] = {4.5, 2.3, 7.2, 8.1};
	
	for(int i=0; i<4; i++){
		cout << " elemnt at index " << i << ": " << numbers[i] << endl;	
	}
	
	cout << "---------------------------------" << endl;
	
	int array[8] = { };
	for(int i=0; i<8; i++){	
		cout << " elemnt at index " << i << ": " << array[i] << endl;
	}
	
	cout << "---------------------------------" << endl;
	
	//text array
	
	string text[] = {"apple","banana","orange"};	
	for(int i=0; i<3; i++){
		
		cout << " elemnt at index " << i << ": " << text[i] << endl;
			
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
