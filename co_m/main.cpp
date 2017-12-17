#include <iostream>

using namespace std;
/*
ZADANIE
Dana jest tablica o d¸ugoæci n. Twoim zadaniem jest wypisanie co m-tego jej elementu (0, m, 2m, ...). Liczby w tablicy numerujemy od 0.

WEJSCIE
W pierwszej linii wejæcia dana jest liczba n (1 ² n ² 1000). W drugiej linii wejæcia dana jest tablica n liczb ai (-1000 ² ai ² 1000).
W ostatniej, trzeciej linii dana jest liczba m (1 ² m ² n).

WYJSCIE
Naleýy wypisa ciˆg liczb zdefiniowany w zadaniu.
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
