#ifndef TAR_H
#define TAR_H

#include "film.h"

class Tar{
    size_t db;
    Film** filmek;

    Tar(const Tar&);
    Tar& operator=(const Tar&);
public:
    Tar(): db(0), filmek(NULL){}

    ~Tar();

    void add(Film* uj);

    void torol(size_t index);

    void fill(const char* file);

    void save(const char* file)const;

    void list()const;
};

#endif