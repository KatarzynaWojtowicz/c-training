#include <iostream>

using namespace std;

/*
ZADANIE
Wartoæ bezwzgl«dna liczby x (znana r—wnieı jako "odleg¸oæ x od zera") jest oznaczana |x| i zdefiniowana nast«pujˆco:
jeıeli 0 ² x, to: |x| = x, a jeıeli x < 0, to: |x| = -x.
Napisz program, kt—ry dla zadanej liczby wypisze jej wartoæ bezwzgl«dnˆ.
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
