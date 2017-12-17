#include <iostream>

using namespace std;
/*
ZADANIE
Naleıy wczyta n liczb naturalnych i wypisa ich sum«.

WEJSCIE
W pierwszym wierszu wejæcia znajduje si« liczba naturalna n (n<=1000). Potem nast«puje n liczb a (a<1000).

WYJSCIE
Szukana suma.
*/
int main()
{
    int n;
    cin >> n;

    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        suma = suma + a;
    }
    cout << suma;
}
