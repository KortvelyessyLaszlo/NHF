#ifndef FILM_H
#define FILM_H

#include <iostream>
#include <fstream>
#include <string>

/// A csaladi es dokumentum osztaly alaposztalya
class Film{
protected:
    std::string cim;
    int perc;
    int kiadas;
public:
    /// Konstruktor
    /// @param cim
    /// @param perc 
    /// @param kiadas 
    Film(std::string cim = "", int perc = 0, int kiadas = 0):cim(cim), perc(perc), kiadas(kiadas){}

    /// masolo konstruktor
    /// @param cpy 
    Film(const Film& cpy):cim(cpy.cim), perc(cpy.perc), kiadas(cpy.kiadas){}

    /// Destruktor
    virtual ~Film(){}

    /// std::iostream-rol beolvasas egy objektumba
    virtual void beolvas();

    /// parameterkent atadott fajlbol beolvasas
    /// @param is
    virtual void beolvas(std::ifstream& is);

    /// std::iostream-re kiiras
    virtual void kiir()const;

    /// Fajlba kiiras
    /// @param os 
    virtual void kiir(std::ofstream& os)const;
};
#endif
