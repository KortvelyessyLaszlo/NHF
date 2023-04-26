#include "film.h"
#include "csaladi.h"
#include "dokumentum.h"
#include "tar.h"

int main(){
    Tar tar;
    Film film;
    Dokumentum dok;
    Csaladi csal;
    film.beolvas();
    dok.beolvas();
    csal.beolvas();
    tar.add(new Film(film));
    tar.add(new Dokumentum(dok));
    tar.add(new Csaladi(csal));
    tar.lista();
    tar.torol(1);
    tar.lista();
    return 0;
}
