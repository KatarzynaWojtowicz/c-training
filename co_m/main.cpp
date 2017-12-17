#include <iostream>

using namespace std;
/*
ZADANIE
Dana jest tablica o d�ugo�ci n. Twoim zadaniem jest wypisanie co m-tego jej elementu (0, m, 2m, ...). Liczby w tablicy numerujemy od 0.

WEJSCIE
W pierwszej linii wej�cia dana jest liczba n (1 � n � 1000). W drugiej linii wej�cia dana jest tablica n liczb ai (-1000 � ai � 1000).
W ostatniej, trzeciej linii dana jest liczba m (1 � m � n).

WYJSCIE
Nale�y wypisa� ci�g liczb zdefiniowany w zadaniu.
*/
int main()
{
    int n;
    cin >> n;

    int liczby[1000];
    for(int i = 0; i < n; i++)
    {
        cin >> liczby[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        if (i % m == 0)
        {
            cout << liczby[i] << " ";
        }
    }
}
