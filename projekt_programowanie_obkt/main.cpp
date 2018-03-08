#include <iostream>
#include "Pasazer.hpp"
#include <ostream>



using namespace std;
int main()
{
   Pasazer nowy("Gosia", "Kot", "4.01.2019", 5);
   //std::cout << "Imie: " << nowy.getImie() << "\nNazwisko: " << nowy.getNazwisko() << "\nData wylotu: " << nowy.getData_wylotu() << "\nIlosc bagazy: " << nowy.getIlosc_bagazy() << "\n" << nowy.drukujBilet() << "Uwaga! " << nowy.dodatkowaOplata()<< "\n\n";

   PasazerPierwszejKlasy nowyPierwszej("Ewa", "Mysz", "8.06.2018", 5, 1, 1, 1);
   //std::cout  << "Imie: " << nowyPierwszej.getImie() << "\nNazwisko: " <<nowyPierwszej.getNazwisko() << "\nData wylotu: " << nowyPierwszej.getData_wylotu() << "\nIlosc bagazy: " << nowyPierwszej.getIlosc_bagazy() << "\n" << nowyPierwszej.drukujBilet() << "\n" << nowyPierwszej.dodatkowaOplata() <<
   "\nOdbierz bilet.\nDziekujemy za skorzystanie z naszych uslug.\nMilej podrozy!\n";

   Pasazer *wsk1 = &nowy;
   std::cout << "Imie: " << nowy.getImie() << "\nNazwisko: " << nowy.getNazwisko() << "\nData wylotu: " << nowy.getData_wylotu() << "\nIlosc bagazy: " << nowy.getIlosc_bagazy() << "\n";
   std::cout << wsk1 ->dodatkowaOplata() << "\n";
   std::cout << wsk1 ->drukujBilet() << "\n";

   PasazerPierwszejKlasy *wsk2 = &nowyPierwszej;
   std::cout << "\nImie: " << nowyPierwszej.getImie() << "\nNazwisko: " <<nowyPierwszej.getNazwisko() << "\nData wylotu: " << nowyPierwszej.getData_wylotu() << "\nIlosc bagazy: " << nowyPierwszej.getIlosc_bagazy() << "\n";
   std::cout << wsk2 ->dodatkowaOplata() << "\n";
   std::cout << wsk2 ->drukujBilet() << "\n";
}
