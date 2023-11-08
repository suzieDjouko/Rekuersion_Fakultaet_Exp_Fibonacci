/*
Datum: 8.11.2023
Name : Djouko Suzie
U05
Fakiltäts- und Potenzbildung
und Fibonacci-Folge
*/

#include<stdio.h> 
// Die Fakultaet Funtion Implementierung 
int fakul(int n) {
	if (n == 0) { // Basis 
		return 1;
	}
	else {
		return n * fakul(n - 1); // Rekursiver Aufruf der Funktion 
	}

}

// potenz berechnen 
int power(int x, int y) {
	if ((x < 0) || (y < 0)) {
		printf("##INVALIDE ZAHL## (gib mir positive Zahlen)\n");
		return 0;
	}
	else if (x == 0) {
		return 0;
	}
	else if (y == 0) {
		return 1;
	}
	else {
		return x * (power(x, (y - 1))); // Rekursiver Aufruf der Funktion power 

	}

}


// Fibonacci- Folge 
int fibo(int n) {
	if (n <= 2) {
		return 1; //Basis 
	}
	else {
		return fibo(n - 1) + fibo(n - 2);// ---

	}

}


int main() {
	printf("\n\n++++++++++ WILLKOMMEN ZUR FAKULTAET- UND POTENZBILDUND  SOWIE ZUR BERECHNUNG DER FIBONACCI-ZAHLEN ++++++++++\n\n\n");
	printf("\n---------- Wähle zwischen 1, 2 und 3----------\n\n");
	printf("1- Berechne die Fakultaet diener ausgewaelte Zahl\n2- Berechne x potenz y\n3- Finde die Fibonacci- Folge einer Zahl\n");

	int wahl1, wahl2;
	do {
		printf("\n----- gib mir eine Zahl 1 , 2 oder 3-----\n");
		scanf("%i", &wahl1);

		/*if (wahl1< 1 || wahl1 >3){
			printf (" :) \n----- gib mir eine Zahl 1 , 2 oder 3 -----\n :) ");
			scanf("%i",&wahl1);
		}

		else {*/

		switch (wahl1) {
		case 1:
			// Fakueltaet Funktion
			// Eingabe 
			printf("\n---------- FAKULTAET BERECHNEN ----------\n\n");
			int m;
			printf("----- gib mir eine Zahl -----\n");
			scanf("%i", &m);
			//Ausgabe 
			int result1 = fakul(m);
			printf("~~  Die Fakultaet von %i ist: %i  ~~\n", m, result1);

			break;

		case 2:
			//Power Funktion
			// Eingabe 
			printf("\n---------- X POTENZ Y BERECHNEN  ----------\n");
			int x0, y0;
			printf("\n ----- gib mir x -----\n");
			scanf("%i", &x0);
			printf("----- gib mir y -----\n");
			scanf("%i", &y0);
			//Ausgabe
			int result2 = power(x0, y0);
			printf("~~ %i potenz %i ist : %i ~~\n", x0, y0, result2);

			break;

		case 3:
			// Fibonacci-Folge 
			// Eingabe 
			printf("\n----------FIBONACCI FOLGE BERECHNEN ----------\n\n");
			int p, q;
			printf("\n ----- gib mir eine Zahl-----\n");
			scanf("%i", &p); // p ist die Eingabe 
			q = p;  // gebe q den Wert des Users 
			printf("~~ Die ersten %i Fibonacci-Zahlen sind :~~\n \n", q);
			for (int q = 1; q <= p; q++) {
				int result3 = fibo(q);
				// Ausgabe 
				printf("~~ f(%i) = %i  ~~\n", q, result3);
			}
			break;

		default:
			printf("  \n----- gib mir eine Zahl 1 , 2 oder 3 -----\n :) ");
			break;


		}


		printf("\n\n----------Wähl 1 aus , wenn du weiter berechnen moechte , wenn nein tipp 0----------\n\n ");
		scanf("%i", &wahl2);


	} while (wahl2 == 1);



	return 0;


}