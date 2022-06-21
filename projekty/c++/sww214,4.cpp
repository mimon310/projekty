#include <stdio.h>

int x, nasobitel, pocet;

int main(void)
{
x=0;
nasobitel = 4;
pocet=0;

	do{
		x=x+nasobitel;
		pocet++;
		printf("%d \t", x);
}
	while(x<1000);

printf("\n Pocet nasobkov cisla %d je %d \n", nasobitel, pocet);	
	
	
}
