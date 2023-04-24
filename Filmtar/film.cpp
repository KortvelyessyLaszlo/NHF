#include <iostream>
#include "film.h"

void Film::beolvas(){
    std::cout << "Adja meg a cimet:" << std::endl;
    std::cin >> cim;
    std::cout << "Adja meg a kiadas evet:" << std::endl;
    std::cin >> kiadas;
    std::cout << "Adja meg hany perces a film:" << std::endl;
    std::cin >> perc;
}

void Film::kiir(){
    std ::cout << "Cim: " << cim << ", Ido: " << perc << " perc, Kiadas eve: " << kiadas << std::endl;
}

const Film& Film::operator=(const Film& rhs){
    if(this == &rhs)
        return rhs;
    cim = rhs.cim;
    perc = rhs.perc;
    kiadas = rhs.kiadas;
    return *this;
}

