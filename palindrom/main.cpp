#include <iostream>

using namespace std;
/*
ZADANIE
Palindromem nazywamy s¸owo, kt—re czytane wprost i wspak jest takie same.
Przyk¸adami palindrom—w sˆ s¸owa kajak, abba,É Liczb« nazywamy palindromicznˆ, jeæli jej zapis dziesi«tny jest s¸owem palindromicznym.
Przyk¸adami liczb palindromicznych sˆ 101, 12421.
Napisz program, kt—ry wczytuje liczb« i wypisuje 1, jeæli jest ona palindromiczna i 0 - w przeciwnym przypadku.
*/
int main()
{
    string tekst;
    cin >> tekst;

    int wynik = 1;
    int n = tekst.length();

    for (int i = 0; i < n; i++)
    {
        if (tekst[i] != tekst[(n-1)-i])
        {
            wynik = 0;
        }
    }
    cout << wynik << endl;
}
