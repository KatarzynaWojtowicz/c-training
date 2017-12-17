#include <iostream>

using namespace std;
/*
ZADANIE
Mamy dany rok r. Powiemy, ıe rok jest przest«pny, gdy wartoæ r jest podzielna przez 4.
Jeæli jednak wartoæ r dzieli si« przez 100, a nie dzieli si« przez 400 to rok nie jest przest«pny.
Zadaniem Twojego programu jest stwierdzenie czy dany rok jest przest«pny.

WEJSCIE
Na wejæciu dana jest jedna liczba r (1 ² r ² 8000) oznaczajˆca dany rok.

WYJSCIE
Naleıy wypisa TAK jeıeli rok jest przest«pny, lub NIE w przeciwnym wypadku.
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
