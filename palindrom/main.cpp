#include <iostream>

using namespace std;
/*
ZADANIE
Palindromem nazywamy s�owo, kt�re czytane wprost i wspak jest takie same.
Przyk�adami palindrom�w s� s�owa kajak, abba,� Liczb� nazywamy palindromiczn�, je�li jej zapis dziesi�tny jest s�owem palindromicznym.
Przyk�adami liczb palindromicznych s� 101, 12421.
Napisz program, kt�ry wczytuje liczb� i wypisuje 1, je�li jest ona palindromiczna i 0 - w przeciwnym przypadku.
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
