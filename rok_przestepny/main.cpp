#include <iostream>

using namespace std;
/*
ZADANIE
Mamy dany rok r. Powiemy, �e rok jest przest�pny, gdy warto� r jest podzielna przez 4.
Je�li jednak warto� r dzieli si� przez 100, a nie dzieli si� przez 400 to rok nie jest przest�pny.
Zadaniem Twojego programu jest stwierdzenie czy dany rok jest przest�pny.

WEJSCIE
Na wej�ciu dana jest jedna liczba r (1 � r � 8000) oznaczaj�ca dany rok.

WYJSCIE
Nale�y wypisa� TAK je�eli rok jest przest�pny, lub NIE w przeciwnym wypadku.
*/
int main()
{
    int r;
    cout << "Podaj rok: ";
    cin >> r;
    if (r % 4 == 0 && r % 100 != 0 || r % 400 == 0)
        cout << "TAK";
    else
        cout << "NIE";
}
