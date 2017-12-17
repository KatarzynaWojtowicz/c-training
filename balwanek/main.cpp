#include <iostream>

using namespace std;
/*
ZADANIE
Pewnej mro�nej zimy Kasia i Asia pojecha�y do parku.
Jak to w zimie, park jest pe�en �niegu, a dok�adniej znajduje si� w nim x litr�w �niegu.
Gdy Asia rozmawia�a przez telefon, Kasia postanowi�a ulepi� ba�wana.
Zanim Asia sko�czy�a rozmawia� Kasia ulepi�a ju� jedn� kul� z k litr�w �niegu.
Asia chce, aby ba�wan by� zbudowany z 3 kul �niegowych i dodatkowo kula le��ca na innej kuli musi by� 2 razy mniejsza.
Asia nie mo�e ju� powi�ksza� ani pomniejsza� kuli zrobionej przez Kasi� i musi j� wykorzysta�, gdy� Kasia mog�aby si� pogniewa�.
Dziewczynki chc� zbudowa� jak najwi�kszego ba�wana. Teraz zastanawiaj� si�, z ilu mililitr�w �niegu mo�e by� zbudowany ich ba�wan.

WEJSCIE
W pierwszym wierszu wej�cia znajduj� si� dwie liczby ca�kowite x i k (1 � x � 106, 1 � k � 105, k < x),
oznaczaj�ce odpowiednio ilo� litr�w �niegu w parku oraz z ilu litr�w �niegu zbudowana jest jedna z kul �nie�nych ba�wana.

WYJSCIE
W pierwszym i jedynym wierszu wyj�cia powinna znajdowa� si� jedna liczb ca�kowita, r�wna maksymalnej obj�to�ci ba�wana (wynik podaj w mililitrach).
Mo�esz za�o�y�, �e ba�wana zawsze mo�na ulepi�.
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
