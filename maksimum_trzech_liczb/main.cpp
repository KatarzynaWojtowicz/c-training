#include <iostream>

using namespace std;
/*
ZADANIE
Dane s� trzy liczby a, b, c. Twoim zadaniem jest wypisanie najwi�kszej z nich.

WEJSCIE
W pierwszym i jedynym wierszu wej�cia znajduj� si� trzy liczby ca�kowite a, b, c (-109 � a, b, c � 109).

WYJSCIE
Nale�y wypisa� liczb� max(a,b,c).
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
