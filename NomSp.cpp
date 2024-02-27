#include "NomSp.hpp"

NomSp::NomSp(const Miejsce &miejsce)
{
    if(typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
        show = noms;
    } else {
        show = noms1;
    }
}

NomSp::~NomSp()
{
    //dtor
}
