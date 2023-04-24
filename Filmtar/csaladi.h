#ifndef CSALADI_H
#define CSALADI_H

#include "film.h"

class Csaladi : public Film{
    int korhatar;
public:
    Csaladi(std::string cim = "", int perc = 0, int kiadas = 0, int korhatar = 0):Film(cim,perc,kiadas), korhatar(korhatar){}

    ~Csaladi(){}

    void beolvas();

    void kiir();
};

#endif