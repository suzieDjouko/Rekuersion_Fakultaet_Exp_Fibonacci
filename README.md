# U05
Schreiben Sie ein Programm für die Fakultäts- und Potenzbildung sowie die
Berechnung der Fibonacci-Zahlen mit drei rekursiven Funktionen:
● Alle Ein- und Ausgaben finden im Hauptprogramm statt.

a) Schreiben Sie eine Funktion int fakul(int n), die die Fakultät berechnet.
Verwenden Sie eine Rekursion. Schauen Sie sich die Folien der Vorlesung an.

● Die Fakultät(n) bildet das Produkt aller natürlichen Zahlen, die kleiner
oder gleich n sind. ( n! = 1*2*3*...*n )

b) Schreiben Sie eine rekursive Funktion int power(int x, int y) zur
Berechnung der Potenz von positiven int-Werten (Ganzzahlen) gemäß der
Funktionsdefinition:
f(x, y) = x^y = x * X ^(y-1)

● Lesen Sie die int-Werte für x und y von der Tastatur ein und reichen sie
diese zur Berechnung an die Funktionen power() weiter.

● Geben Sie das Ergebnis im Hauptprogramm aus.

c) Schreiben Sie eine rekursive C-Funktion int fibo(int n) zur Berechnung
des n-ten Folgengliedes der Fibonacci-Folge:

f(n)={ 1 wenn n≤2; n∈ℕ
     { f(n-1) + f(n-2) sonst ;n∈ℕ
     
Die Fibonacci-Folge lautet:


1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

● Geben Sie die ersten 12 Fibonacci-Zahlen im Hauptprogramm aus.
