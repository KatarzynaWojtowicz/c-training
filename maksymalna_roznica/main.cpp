#include <iostream>
#include <climits>

using namespace std;
/*
ZADANIE
Niech dany b�dzie n-elementowy ci�g liczb ca�kowitych a1, a2, ..., an. Niech maksymalna r��nica ci�gu oznacza najwi�ksz� z liczb ai-aj gdzie 1 � i,j � n.
Zadaniem Twojego programu b�dzie znalezienie maksymalnej r��nicy danego ci�gu.

WEJSCIE
W pierwszym wierszu wej�cia znajduje si� jedna liczba naturalna n (1 � n � 500000). W drugim wierszu znajduje si� n liczb a1, a2, ..., an,
b�d�cych kolejnymi elementami ci�gu (-104 � ai � 104).

WYJSCIE
W jedynym wierszu wyj�cia nale�y wypisa� najwi�ksz� r��nic� ci�gu a.
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
