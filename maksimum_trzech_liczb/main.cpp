#include <iostream>

using namespace std;
/*
ZADANIE
Dane sˆ trzy liczby a, b, c. Twoim zadaniem jest wypisanie najwi«kszej z nich.

WEJSCIE
W pierwszym i jedynym wierszu wejæcia znajdujˆ si« trzy liczby ca¸kowite a, b, c (-109 ² a, b, c ² 109).

WYJSCIE
Naleýy wypisa liczb« max(a,b,c).
*/
int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a >= b && a >= c)
    {
        cout << a;
    }
    else if (b >= a && b >= c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}
