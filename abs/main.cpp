#include <iostream>

using namespace std;

/*
ZADANIE
Warto� bezwzgl�dna liczby x (znana r�wnie� jako "odleg�o� x od zera") jest oznaczana |x| i zdefiniowana nast�puj�co:
je�eli 0 � x, to: |x| = x, a je�eli x < 0, to: |x| = -x.
Napisz program, kt�ry dla zadanej liczby wypisze jej warto� bezwzgl�dn�.
*/
int main()
{
   int liczba;
   cout << "Podaj liczbe: ";
   cin >> liczba;
   if (liczba < 0)
   {
        liczba = -liczba;
   }
   cout << "Wartosc bezwzgledna wynosi: " << liczba << endl;
}
