#include <stdio.h>

int a, najvacsie, najmensie;

int main(){
	
	najvacsie = 0;
	najmensie = 65536;
	
	do {
		printf("Zadaj cislo \t");
		scanf("%d", &a);
		
	if (a > najvacsie){
		najvacsie = a;
		}
	
	if (a < najmensie){
		najmensie = a;
		}
		
	printf("Najvacsim cislo je %d \n", najvacsie);
	printf("Najmensim cislo je %d \n", najmensie);
	}
	while(a > 0);
	
	
}
