#include <iostream>

using namespace std;
/*
ZADANIE
Liczby Fibonacciego s� zdefiniowane nast�puj�co: F0=0, F1=1, Fn = Fn-1 + Fn-2. Twoim zadaniem jest obliczenie Fn

WEJSCIE
W jednej jedynej linii wej�cia dana jest liczba n (0 � n � 36).

WYJSCIE
Nale�y wypisa� szukan� liczb�.
*/
int main()
{
    int n;
    cin >> n;
    int f1 = 0;
    int f2 = 1;

    if(n == 0)
    {
        cout << f1;
    }
    else if (n == 1)
    {
        cout << f2;
    }
    else
    {

        int przedostatnia = f1;
        int ostatnia = f2;
        int wynik;

        for(int i = 2; i <= n; i++)
        {
            wynik = ostatnia + przedostatnia;
            przedostatnia = ostatnia;
            ostatnia = wynik;
        }
        cout << wynik;
    }
}
