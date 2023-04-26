#include "tar.h"

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
    if(index >= db)
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

void Tar::lista(){
    for(size_t i = 0; i < db; ++i){
        std::cout << i + 1 << ". ";
        filmek[i]->kiir();
    }
}
