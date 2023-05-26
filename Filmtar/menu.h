#ifndef MENU_H
#define MENU_H

#include "memtrace.h"
#include "tar.h"

class Menu{
public:
    void A(Tar&)const;
    void B(Tar&)const;
    void C(const Tar&)const;
};
#endif
