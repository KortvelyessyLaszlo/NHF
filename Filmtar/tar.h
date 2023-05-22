#ifndef TAR_H
#define TAR_H

#include "film.h"

/// Filmek heterogen kollekcioja. Dinamikus tarolo
class Tar{
    Film** filmek;
    size_t db;

    Tar(const Tar&);
    Tar& operator=(const Tar&);
public:
    /// parameter nelkuli konstruktor
    Tar():db(0), filmek(NULL){}

    /// destruktor
    ~Tar();

    /// Uj film hozzadasa a tarolohoz. Es a tarolo meretenek novelese
    /// @param uj - Az uj film.
    void hozzaad(Film* uj);

    /// Adott indexu elem torlese a tarolobol, es a tarolo meretenek csokkentese
    /// @param index - index
    /// @return - std::out_of_range, ha a parameter(index) nem resze a tombnek
    void torol(size_t index);

    /// Egy fajlbol a tarolo inicializalasa
    /// @param file - Fajl neve
    /// @return - const char* hiba, ha fajlt nem lehet megnyitni
    void betolt(const char* file);

    /// A tarolo mentese egy fajlba
    /// @param file - Fajl neve
    /// @return - const char* hiba, ha fajlt nem lehet megnyitni
    void mentes(const char* file)const;

    /// A tarolo kilistazasa
    void lista()const;
};

#endif
