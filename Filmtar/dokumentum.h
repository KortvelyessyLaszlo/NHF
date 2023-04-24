#ifndef DOKUMNETUM_H
#define DOKUMENTUM_H

#include "film.h"

class Dokumentum : public Film{
    std::string leiras;
public:
    Dokumentum(std::string cim = "", int perc = 0, int kiadas = 0, std::string leiras = ""): Film(cim,perc,kiadas), leiras(leiras){}

    ~Dokumentum(){}

    void beolvas();

    void kiir();
};

#endif