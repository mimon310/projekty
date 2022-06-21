#include <iostream>
using namespace std;


void ukoncenie(){										// 1. funkcia 
	cout << "Pre ukoncenie zadaj -1" << endl;			
}

void cislo(){											// 2. funkcia 
	
	float a=0, najvacsie=0, najmensie=10000000; 		// lokalna premenna
	
	do {
		cout << "Zadaj cislo    " << flush;	
		cin >> a;
		
	if(a == -1){
	break;
	}	
	if (a > najvacsie){
		najvacsie = a;
		}
	if (a < najmensie){
		najmensie = a;
		}
		
	cout <<"Najvacsie cislo je "<< najvacsie << endl;
	cout <<"Najmensie cislo je "<< najmensie << endl;
	}
	while(a > -1);	
}
	


int main(){
	
	ukoncenie();
	cislo();
	
	
	return 0;
}
