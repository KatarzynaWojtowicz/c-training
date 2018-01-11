#include <iostream>
#include <algorithm>

using namespace std;

//ZADANIE
//Należy posortować ciąg liczb naturalnych.

//WEJSCIE
//Na wejściu dane jest n < 10000, a następnie n liczb naturalnych mniejszych niż 10000.

//WYJSCIE
//Na wyjściu ma się pojawić n liczb naturalnych odpowiadających posortowanemu ciągowi.
int main()
{
    int length;
    cin >> length;

    int numbers[length];
     for (int i = 0; i < length; i++){
        cin >> numbers[i];
     }
     sort(numbers, numbers + length);
     for (int j = 0; j < length; j++){
        cout << numbers[j] << " ";
     }

}
