#include <iostream>
#include <climits>

using namespace std;
/*
ZADANIE
Niech dany b«dzie n-elementowy ciˆg liczb ca¸kowitych a1, a2, ..., an. Niech maksymalna r—ýnica ciˆgu oznacza najwi«kszˆ z liczb ai-aj gdzie 1 ² i,j ² n.
Zadaniem Twojego programu b«dzie znalezienie maksymalnej r—ýnicy danego ciˆgu.

WEJSCIE
W pierwszym wierszu wejæcia znajduje si« jedna liczba naturalna n (1 ² n ² 500000). W drugim wierszu znajduje si« n liczb a1, a2, ..., an,
b«dˆcych kolejnymi elementami ciˆgu (-104 ² ai ² 104).

WYJSCIE
W jedynym wierszu wyjæcia naleýy wypisa najwi«kszˆ r—ýnic« ciˆgu a.
*/
int main()
{
    int n;
    cin >> n;

    int najwiekszy = INT_MIN;
    int najmniejszy = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a > najwiekszy)
        {
            najwiekszy = a;
        }
        if (a < najmniejszy)
        {
            najmniejszy = a;
        }


    }
    int roznica = najwiekszy - najmniejszy;
    cout << roznica;
}
