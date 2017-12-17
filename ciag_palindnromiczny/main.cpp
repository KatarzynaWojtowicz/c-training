#include <iostream>

using namespace std;

/*
ZADANIE
Napisz program, który sprawdza, czy dany ciąg jest palindromiczny, tzn. czy równe są jego pierwszy i ostatni element, jego drugi i przedostatni element, itd..

WEJŚCIE
W jedynym wierszu znajduje się ciąg a1, a2,...,an liczb naturalnych, zakończony liczbą -1. Możesz założyć, że n≤1000000.

WYJŚCIE
Na wyjściu ma znaleźć się liczba 1, jeśli ciąg jest palindromiczny, tzn. jeśli a1=an, a2=an-1, itd... . W przeciwnym razie na wyjściu ma znaleźć się liczba 0.
*/
bool czyJestPalindrom(int tab[], int rozm);

int main()
{
    int liczba[1000000] = {};

    int i = -1;
    do {
        i++;
        cin >> liczba [i];
    } while(liczba[i] != -1);

    bool wynik = czyJestPalindrom(liczba, i);

    cout << wynik;
}

 bool czyJestPalindrom(int tab[], int rozm)
 {
    bool czy_palindrom = true;

    for (int i = 0; i < rozm; i++)
    {
        if (tab[i] != tab[rozm - 1 - i])
        {
            czy_palindrom = false;
            break;
        }
    }
    return czy_palindrom;
}

