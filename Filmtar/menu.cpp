#include <ios>
#include <limits>

#include "memtrace.h"
#include "film.h"
#include "csaladi.h"
#include "dokumentum.h"
#include "tar.h"
#include "menu.h"

void Menu::A(Tar& tar)const{
    char tipus;
    std::cout << "a: Film" << std::endl << "b: Csaladifilm" << std::endl
    << "c: Dokumentumfilm" << std::endl << "e: VISSZA" << std::endl;
    std::cin >> tipus;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    switch(tipus){
        case 'a':{
            Film film;
            film.beolvas();
            tar.hozzaad(new Film(film));
        }
        break;
        case 'b':{
            Csaladi csaladi;
            csaladi.beolvas();
            tar.hozzaad(new Csaladi(csaladi));
        }
        break;
        case 'c':{
            Dokumentum dokumentum;
            dokumentum.beolvas();
            tar.hozzaad(new Dokumentum(dokumentum));
        }
        break;
        case 'e':
            break;
        default:
            std::cout << "Ilyen film tipus nincsen!" << std::endl;
    }
}

void Menu::B(Tar& tar)const{
    tar.lista();
    std::cout << "Hanyadik elemet szeretne torolni?" << std::endl;
    size_t del;
    std::cin >> del;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    try{
        tar.torol(del - 1);
    }catch(std::out_of_range&){
        std::cout << "Nincs ilyen index!" << std::endl;
    }
}

void Menu::C(const Tar& tar)const{
    tar.lista();
}
