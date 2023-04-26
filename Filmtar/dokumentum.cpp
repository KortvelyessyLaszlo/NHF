#include "dokumentum.h"

void Dokumentum::beolvas(){
    Film::beolvas();
    std::cout << "Adja meg a leirast:" << std::endl;
    std::getline(std::cin, leiras);
}

void Dokumentum::kiir(){
    std::cout << "Cim: " << cim << ", Ido: " << perc << " perc, Kiadas eve: " << kiadas << ", Leiras: " << leiras << std::endl;
}

Dokumentum& Dokumentum::operator=(const Dokumentum& rhs){
    if(this == &rhs)
        return *this;
    cim = rhs.cim;
    perc = rhs.perc;
    kiadas = rhs.kiadas;
    leiras = rhs.leiras;
    return *this;
}