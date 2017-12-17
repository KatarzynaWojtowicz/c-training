#include <iostream>

using namespace std;
/*
ZADANIE
Pewnej mronej zimy Kasia i Asia pojecha¸y do parku.
Jak to w zimie, park jest pe¸en æniegu, a dok¸adniej znajduje si« w nim x litr—w æniegu.
Gdy Asia rozmawia¸a przez telefon, Kasia postanowi¸a ulepi ba¸wana.
Zanim Asia skoÄczy¸a rozmawia Kasia ulepi¸a juı jednˆ kul« z k litr—w æniegu.
Asia chce, aby ba¸wan by¸ zbudowany z 3 kul æniegowych i dodatkowo kula leıˆca na innej kuli musi by 2 razy mniejsza.
Asia nie moıe juı powi«ksza ani pomniejsza kuli zrobionej przez Kasi« i musi jˆ wykorzysta, gdyı Kasia mog¸aby si« pogniewa.
Dziewczynki chc« zbudowa jak najwi«kszego ba¸wana. Teraz zastanawiajˆ si«, z ilu mililitr—w æniegu moıe by zbudowany ich ba¸wan.

WEJSCIE
W pierwszym wierszu wejæcia znajdujˆ si« dwie liczby ca¸kowite x i k (1 ² x ² 106, 1 ² k ² 105, k < x),
oznaczajˆce odpowiednio iloæ litr—w æniegu w parku oraz z ilu litr—w æniegu zbudowana jest jedna z kul ænieınych ba¸wana.

WYJSCIE
W pierwszym i jedynym wierszu wyjæcia powinna znajdowa si« jedna liczb ca¸kowita, r—wna maksymalnej obj«toæci ba¸wana (wynik podaj w mililitrach).
Moıesz za¸oıy, ıe ba¸wana zawsze moına ulepi.
*/
int main()
{
    int x, k;
    cin>>x;
    cin>>k;

    if (7 * k <= x)
    {
        cout << 7 * k * 1000;
    }
    else if(3.5 * k <= x)
    {
        cout << 3.5 * k * 1000;
    }
    else
    {
        cout << 1.75 * k * 1000;
    }
}
