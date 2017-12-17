#include <iostream>

using namespace std;
/*
ZADANIE
Zadaniem Twojego programu b«dzie wypisanie wszystkich naturalnych dzielnik—w zadanej liczby uporzˆdkowanych rosnˆco.

WEJSCIE
Na wejæciu dana jest jedna liczba n (1 ² n ² 108).

WYJSCIE
W i-tym wierszu wyjæcia naleýy wypisa i-ty z kolei dzielnik liczby n.
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
