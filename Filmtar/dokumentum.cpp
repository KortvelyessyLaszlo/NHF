#include <iostream>

#include "dokumentum.h"

void Dokumentum::beolvas(){
    Film::beolvas();
    std::cout << "Adja meg a leirast:" << std::endl;
    std::cin.ignore();
    std::getline(std::cin, leiras);
}

void Dokumentum::kiir(){
    std ::cout << "Cim: " << cim << ", Ido: " << perc << " perc, Kiadas eve: " << kiadas << ", Leiras: " << leiras << std::endl;
}