#include <iostream>

using namespace std;
/*
ZADANIE
Napisz program, kt—ry wczytuje liczb« i oblicza jej liczb« cyfr w systemie dziesi«tnym.
*/
int main()
{
   int n;
   cin >> n;
   int k = 0;
   do
   {
       n /= 10;
       k++;
   }
   while (n > 0) ;
   cout << k << endl;
   return 0;
}
