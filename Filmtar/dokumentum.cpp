#include "dokumentum.h"

void Dokumentum::beolvas(){
    Film::beolvas();
    std::cout << "Adja meg a leirast:" << std::endl;
    std::getline(std::cin, leiras);
}

void Dokumentum::beolvas(std::ifstream& is){
    Film::beolvas(is);
    std::getline(is, leiras);
}

void Dokumentum::kiir()const{
    std::cout << "Cim: " << cim << ", Ido: " << perc << " perc, Kiadas eve: " << kiadas << ", Leiras: " << leiras << std::endl;
}