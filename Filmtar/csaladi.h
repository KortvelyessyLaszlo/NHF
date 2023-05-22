#ifndef CSALADI_H
#define CSALADI_H

#include "film.h"

/// Film osztaly leszarmazottja
class Csaladi : public Film{
    int korhatar;
public:
    Csaladi(std::string cim = "", int perc = 0, int kiadas = 0, int korhatar = 0):Film(cim,perc,kiadas), korhatar(korhatar){}

    Csaladi(const Csaladi& cpy):Film(cpy), korhatar(cpy.korhatar){}

    ~Csaladi(){}

    /// A film osztalnyak megfelelo, leszarmaztatott fuggvenyek
    void beolvas();

    void beolvas(std::ifstream& is);

    void kiir()const;

    void kiir(std::ofstream& os)const;
};

#endif