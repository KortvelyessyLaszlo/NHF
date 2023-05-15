#include "tar.h"
#include "dokumentum.h"
#include "csaladi.h"

Tar::~Tar(){
    for(size_t i = 0; i < db; ++i){
        delete filmek[i];
    }
    delete[] filmek;
}

void Tar::add(Film* uj){
    Film** uj_tomb = new Film*[db + 1];
    for(size_t i = 0; i < db; ++i){
        uj_tomb[i] = filmek[i];
    }
    uj_tomb[db] = uj;
    delete[] filmek;
    filmek = uj_tomb;
    ++db;
}

void Tar::torol(size_t index){
    if(index >= db || index < 0)
        throw std::out_of_range("Tar");
    Film** uj_tomb = new Film*[db - 1];
    for(size_t i = 0; i < index; ++i){
        uj_tomb[i] = filmek[i];
    }
    for(size_t i = index; i < db - 1; ++i){
        uj_tomb[i] = filmek[i + 1];
    }
    delete filmek[index];
    delete[] filmek;
    filmek = uj_tomb;
    --db;
}

void Tar::fill(const char* file){
    std::ifstream inFile;
    inFile.open(file);
    if(!inFile.is_open())
        throw "Nem sikerult megynitni a fajlt!\n";
    char tipus;
    while(inFile >> tipus){
        inFile.ignore(1);
        if(tipus == 'F'){
            Film film;
            film.beolvas(inFile);
            this->add(new Film(film));
        }
        if(tipus == 'D'){
            Dokumentum dokumentum;
            dokumentum.beolvas(inFile);
            this->add(new Dokumentum(dokumentum));
        }
        if(tipus == 'C'){
            Csaladi csaladi;
            csaladi.beolvas(inFile);
            this->add(new Csaladi(csaladi));
        }
    }
    inFile.close();   
}

void Tar::save(const char* file)const{
    std::ofstream outFile;
    outFile.open(file);
    if(!outFile.is_open())
        throw "Nem sikerult megynitni a fajlt!\n";
    for(size_t i = 0; i < db; ++i){
        filmek[i]->kiir(outFile);
    }
    outFile.close();
}

void Tar::list()const{
    for(size_t i = 0; i < db; ++i){
        std::cout << i + 1 << ". ";
        filmek[i]->kiir();
    }
}