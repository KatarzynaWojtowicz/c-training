#include <iostream>

using namespace std;
/*
ZADANIE
Marta pomy�la�a o dw�ch liczbach ca�kowitych: a oraz b (a >= b). Znasz ich sum� oraz r��nic�.
Czy potrafisz powiedzie�, o jakich liczbach pomy�la�a?

WEJSCIE
Dwie liczby naturalne: a+b oraz a-b (0 <= a-b <= a+b <= 1000000000).

WYJSCIE
Dwie liczby po spacji: a oraz b.
*/
int main()
{
   int s, r ;
   cin >> s >>r;
   int a, b;
   a = (s + r) / 2;
   b = s - a;
   cout << a << ' ' << b << endl;
   return 0;
}
