#include "MaxiSpl.hpp"

MaxiSpl::MaxiSpl(Miejsce &miejsce, Ryba &ryba)
{
    if(typeid(ryba) == typeid(Karp)) {
        if (typeid(miejsce) == typeid(Pomost)) {
            show = maxik1;
        } else {
            show = maxik;
        }
    } else if(typeid(miejsce) == typeid(Pomost)) {
        show = maxi1;
    } else {
        show = maxi;
    }
}

MaxiSpl::~MaxiSpl()
{
    //dtor
}
