#include "NomSpl.hpp"

NomSpl::NomSpl(Miejsce &miejsce, Ryba &ryba)
{
    if(typeid(ryba) == typeid(Karp)) {
        if (typeid(miejsce) == typeid(Pomost)) {
            show = nomk1;
        } else {
            show = nomk;
        }
    } else if(typeid(miejsce) == typeid(Pomost)) {
        show = nom1;
    } else {
        show = nom;
    }
}

NomSpl::~NomSpl()
{
    //dtor
}
