#ifndef DOKUMNETUM_H
#define DOKUMENTUM_H

#include "memtrace.h"
#include "film.h"

/// Film osztaly leszarmazottja
class Dokumentum : public Film{
    std::string leiras;
public:
    Dokumentum(std::string cim = "", int perc = 0, int kiadas = 0, std::string leiras = ""):Film(cim,perc,kiadas), leiras(leiras){}

    Dokumentum(const Dokumentum& cpy):Film(cpy), leiras(cpy.leiras){}

    ~Dokumentum(){}

    /// A film osztalnyak megfelelo, leszarmaztatott fuggvenyek
    void beolvas();

    void beolvas(std::ifstream& is);

    void kiir()const;

    void kiir(std::ofstream& os)const;
};
#endif
