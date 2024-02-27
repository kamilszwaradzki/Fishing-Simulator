#include "NomZyw.hpp"

NomZyw::NomZyw(const Miejsce &miejsce)
{
    if(typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
        show = nomz1;
    } else {
        show = nomz;
    }
}

NomZyw::~NomZyw()
{
    //dtor
}
