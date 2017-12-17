#include <iostream>

using namespace std;
/*
ZADANIE
Napisz program, kt—ry dla wczytanej liczby wypisze jej cyfr« setek.
*/
int main()
{
    int n;
    cin >> n;

    int z = n % 1000;
    int ileSetek = z / 100;
    cout << ileSetek << endl;
}
