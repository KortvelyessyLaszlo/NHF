#include "csaladi.h"
#include "film.h"

void Csaladi::beolvas(){
    Film::beolvas();
    std::cout << "Adja meg a korhatart:" << std::endl;
    std::cin >> korhatar;
}

void Csaladi::kiir(){
    std ::cout << "Cim: " << cim << ", Ido: " << perc << " perc, Kiadas eve: " << kiadas << ", Korhatar: " << korhatar << std::endl;
}
