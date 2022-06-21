#include <iostream>
using namespace std;


int main(){
	
	cout << "enter your numbers   " << flush;
	int n = 0;
	cin >> n;
	
	
	int min = n, max = n;
	for (int i = 1; i <= 5; i++){
		cin >> n;	
		min = (n < min) ? n : min;
		max = (n > max) ? n : max;
	}
	
	cout << " min = " << min <<" max = " << max << endl;
	return 0;
}
