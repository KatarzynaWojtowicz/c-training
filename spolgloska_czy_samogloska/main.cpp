#include <iostream>

using namespace std;

/*
ZADANIE
Napisz program, kt�ry wczyta liter� i stwierdzi, czy jest ona sp��g�osk� czy samog�osk�.

WEJSCIE
W pierwszej i jedynej linii wej�cia znajduje si� jedna ma�a litera alfabetu angielskiego.

WYJSCIE
Nale�y wypisa� samogloska lub spolgloska.
*/

int main()
{
    char litera;
    cout << "Podaj litere: ";
    cin >> litera;
    if (litera == 'a' || litera == 'e' || litera == 'i' || litera == 'o' || litera == 'u' || litera == 'y')
    {
        cout << "samogloska"<< endl;
    }
    else
    {
        cout << "spolgloska" << endl;
    }
}
