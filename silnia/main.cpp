#include <iostream>

using namespace std;
/*
ZADANIE
Policz n!
*/
int silnia(int n);
int main()
{
    int n;
    cout << "Podaj liczbe" << endl;
    cin >> n;
    int  wynikSilnia = silnia(n);
    cout << wynikSilnia;
}

int silnia(int n)
{
    int wynik = 1;
    for (int i = 1; i <= n; i++)
    {
        wynik = wynik * i;
    }
    return wynik;
}
