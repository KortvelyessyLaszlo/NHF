#include "csaladi.h"

void Csaladi::beolvas(){
    Film::beolvas();
    std::cout << "Adja meg a korhatart:" << std::endl;
    std::cin >> korhatar;
    std::cin.ignore();
}

void Csaladi::beolvas(std::ifstream& is){
    Film::beolvas(is);
    is >> korhatar;
    is.ignore();
}

void Csaladi::kiir()const{
    std ::cout << "Cim: " << cim << ", Ido: " << perc << " perc, Kiadas eve: " << kiadas << ", Korhatar: " << korhatar << std::endl;
}

void Csaladi::kiir(std::ofstream& os)const{
    os << "C;" << cim << ";" << perc << ";" << kiadas << ";" << korhatar << std::endl;
}