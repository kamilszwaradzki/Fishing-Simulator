#include "MaxiSpl.hpp"

MaxiSpl::MaxiSpl(const Miejsce &miejsce, const Ryba &ryba)
{
    if(typeid(ryba) == typeid(Karp)) {
        if (typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
            show = maxik1;
        } else {
            show = maxik;
        }
    } else if(typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
        show = maxi1;
    } else {
        show = maxi;
    }
}

MaxiSpl::~MaxiSpl()
{
    //dtor
}
