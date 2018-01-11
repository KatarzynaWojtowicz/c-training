#include <iostream>

using namespace std;

//ZADANIE
//Wiadomo, i¿ F0 = F1 = 1 oraz, ¿e Fn = Fn-1 + Fn-2.

//WEJSCIE
//Na wejœciu dana jest jedna liczba naturalna n nie wiêksza od 2^31.

//WYJSCIE
//Nale¿y wypisaæ cztery ostatnie cyfry liczby Fn.
short calculate(int n)
{
    // Here the trick: last 4 digits of a Fibonacci repeat with a cycle length of 15000!!
    // 1 digit: 60 cycle
    // 2 digits: 300 cycle
    // 3 digits: 1500 cycle
    // 4 digits: 15000 cycle
    n %= 15000;

	short a = 0, b = 1, c = 0;
    for (int i = 0; i < n; i++)
    {
        c = (a + b) % 10000;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int n;
    cin >> n;

    cout << calculate(n);

    return 0;
}
