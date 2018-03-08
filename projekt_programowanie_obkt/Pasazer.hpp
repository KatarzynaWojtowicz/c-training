#ifndef PASAZER_HPP_INCLUDED
#define PASAZER_HPP_INCLUDED
#include <stdio.h>
#include <ostream>

class Pasazer
{
public:
    Pasazer(): imie_(), nazwisko_(), data_wylotu_(), ilosc_bagazy_() {};
    Pasazer(std::string imie, std::string nazwisko, std::string data_wylotu, int ilosc_bagazy): imie_(imie), nazwisko_(nazwisko), data_wylotu_(data_wylotu), ilosc_bagazy_(ilosc_bagazy) {}
    virtual ~Pasazer() {}

    std::string getImie()
    {
        return imie_;
    }

    void putImie(std::string imie)
    {
        imie_ = imie;
    }

    std::string getNazwisko()
    {
        return nazwisko_;
    }

    void putNazwisko(std::string nazwisko)
    {
        nazwisko_ = nazwisko;
    }

    std::string getData_wylotu()
    {
        return data_wylotu_;
    }

    void putData_wylotu(std::string data_wylotu)
    {
        data_wylotu_ = data_wylotu;
    }

    int getIlosc_bagazy()
    {
        return ilosc_bagazy_;
    }

    void putIlosc_bagazy(int ilosc_bagazy)
    {
        ilosc_bagazy_ = ilosc_bagazy;
    }



    virtual std::string drukujBilet()
    {
        return "Drukowanie biletu dla zwyklego pasazera..." ;
    }

    virtual std::string dodatkowaOplata()
    {
        return "Nalezy dokonac dodatkowej oplaty!";
    }



protected:
    std::string imie_;
    std::string nazwisko_;
    std::string data_wylotu_;
    int ilosc_bagazy_;

};

class PasazerPierwszejKlasy : public Pasazer
{
public:
    PasazerPierwszejKlasy():Pasazer(), lunch_(1), pierwszenstwo_(1), dodatkowy_bagaz_(1) {}
    PasazerPierwszejKlasy( std::string imie, std::string nazwisko, std::string data_wylotu, int ilosc_bagazy, bool lunch, bool pierwszenstwo, bool dodatkowy_bagaz):
        Pasazer(imie, nazwisko, data_wylotu, ilosc_bagazy),
        lunch_(lunch), pierwszenstwo_(pierwszenstwo),  dodatkowy_bagaz_(dodatkowy_bagaz) {}


    bool getLunch()
    {
        return lunch_;
    }

    void putLunch(bool lunch)
    {
        lunch_ = lunch;
    }

    bool getPierwszenstwo()
    {
        return pierwszenstwo_;
    }

    void putPierwszenstwo(bool pierwszenstwo)
    {
        pierwszenstwo_ = pierwszenstwo;
    }

    bool getDodatkowy_bagaz()
    {
        return dodatkowy_bagaz_;
    }

    void putDodatkowy_bagaz(bool dodatkowy_bagaz)
    {
        dodatkowy_bagaz_ = dodatkowy_bagaz;
    }

    virtual std::string drukujBilet()
    {
        return  "\nDrukowanie biletu dla pasazera pierwszej klasy...\n";
    }

    virtual std::string dodatkowaOplata()
    {
        return "Brak dodatkowej oplaty dla pasazera pierwszej klasy.\n";
    }
private:
    bool lunch_;
    bool pierwszenstwo_;
    bool dodatkowy_bagaz_;
};

#endif // PASAZER_HPP_INCLUDED
