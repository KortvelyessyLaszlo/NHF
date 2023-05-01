#ifndef FILM_H
#define FILM_H

#include <iostream>
#include <fstream>
#include <string>

class Film{
protected:
    std::string cim;
    int perc;
    int kiadas;
public:
    Film(std::string c1 = "", int perc = 0, int kiadas = 0): cim(c1), perc(perc), kiadas(kiadas) {}

    Film(const Film& cpy): cim(cpy.cim), perc(cpy.perc), kiadas(cpy.kiadas) {}

    virtual ~Film(){}

    virtual void beolvas();

    virtual void beolvas(std::ifstream& is);

    virtual void kiir()const;
};
#endif
