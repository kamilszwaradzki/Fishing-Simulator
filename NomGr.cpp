#include "NomGr.hpp"

NomGr::NomGr(const Miejsce &miejsce, const Ryba &ryba)
{
    if(typeid(ryba) == typeid(Karp)) {
        if (typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
            show = nomk1;
        } else {
            show = nomk;
        }
    } else if(typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
        show = nom1;
    } else {
        show = nom;
    }
}

NomGr::~NomGr()
{
    //dtor
}
