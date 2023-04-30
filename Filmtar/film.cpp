#include "film.h"

void Film::beolvas(){
    std::cout << "Adja meg a cimet:" << std::endl;
    std::getline(std::cin, cim);
    std::cout << "Adja meg a kiadas evet:" << std::endl;
    std::cin >> kiadas;
    std::cout << "Adja meg hany perces a film:" << std::endl;
    std::cin >> perc;
    std::cin.ignore();
}

void Film::kiir()const{
    std ::cout << "Cim: " << cim << ", Ido: " << perc << " perc, Kiadas eve: " << kiadas << std::endl;
}

    Film& Film::operator=(const Film& rhs){
    if(this == &rhs)
        return *this;
    cim = rhs.cim;
    perc = rhs.perc;
    kiadas = rhs.kiadas;
    return *this;
}

void Film::beolvas(std::ifstream& is){
    std::getline(is, cim,';');
}

