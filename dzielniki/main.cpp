#include <iostream>

using namespace std;
/*
ZADANIE
Zadaniem Twojego programu b�dzie wypisanie wszystkich naturalnych dzielnik�w zadanej liczby uporz�dkowanych rosn�co.

WEJSCIE
Na wej�ciu dana jest jedna liczba n (1 � n � 108).

WYJSCIE
W i-tym wierszu wyj�cia nale�y wypisa� i-ty z kolei dzielnik liczby n.
*/
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }

}
