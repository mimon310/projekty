package zadanie4;

import java.util.Scanner;

public class zadanie {

	public static void main(String[] args) {
		
		
		System.out.println();
		System.out.println("	Simon Feco");
		System.out.println("-----------------------------");
		System.out.println("	3.F");
		System.out.println();
		
		int a = 10;
		int b = 5;
		int scitanie = a+b;
		int odcitanie = a-b;
		int nasobenie = a*b;
		int delenie = a/b;
		
		System.out.println("Prva hodnota: " + a);
		System.out.println("Druha hodnota: " + b);
		System.out.println("Vysledok scitania je: " + scitanie);
		System.out.println("Vysledok odcitania je: " + odcitanie);
		System.out.println("Vysledok nasobenia je: " + nasobenie);
		System.out.println("Vysledok delenia je: " + delenie);
		
		
		System.out.println();
		System.out.println("-----------------------------");
		System.out.println();
		
		
		
		
		
		Scanner scanner = new Scanner(System.in);						//pridame scanner
		char operator;													
		System.out.print("Zadaj prvu hodnotu: ");
		int m = scanner.nextInt();										//nacita prvu hodnotu m
		System.out.println("Vyber operator: +, -, *, /  :");
	    operator = scanner.next().charAt(0);							//nacita znak operatora
		System.out.print("Zadaj druhu hodnotu: ");
		int n = scanner.nextInt();										//nacita druhu hodnotu n
		
		try {
			 
		//	int sci = m+n;
		//	int odc = m-n;
		//	int nas = m*n;
		//	int del = m/n;
			
			switch(operator) {
			
				case '+':
					int sci = m+n;
					System.out.println("Vysledok scitania je: " + sci);
					break;
				case '-':
					int odc = m-n;
					System.out.println("Vysledok odcitania je: " + odc);
					break;
				case '*':
					int nas = m*n;
					System.out.println("Vysledok nasobenia je: " + nas);
					break;
				case '/':
					int del = m/n;
					System.out.println("Vysledok delenia je: " + del);
					break;
				default:
			        System.out.println("Zly operator");
			        break;
		
			}
			
		}
		catch (ArithmeticException ae) {							//odchyti error pri deleni nulou
            System.out.println("Delenie nulou.");
		
		
	
		}
	}
		
		
}
