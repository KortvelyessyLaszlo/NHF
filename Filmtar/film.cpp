#include "film.h"

void Film::beolvas(){
    std::cout << "Adja meg a cimet:" << std::endl;
    std::getline(std::cin, cim);
    std::cout << "Adja meg hany perces a film:" << std::endl;
    std::cin >> perc;
    std::cout << "Adja meg a kiadas evet:" << std::endl;
    std::cin >> kiadas;
    std::cin.ignore();
}

void Film::beolvas(std::ifstream& is){
    std::getline(is, cim, ';');
    is >> perc;
    is.ignore();
    is >> kiadas;
    is.ignore();
}

void Film::kiir()const{
    std ::cout << "Cim: " << cim << ", Ido: " << perc << " perc, Kiadas eve: " << kiadas << std::endl;
}