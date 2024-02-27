#include "MaxiSp.hpp"

MaxiSp::MaxiSp(const Miejsce &miejsce)
{
    if(typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
        show = maxis;
    } else {
        show = maxis1;
    }
}

MaxiSp::~MaxiSp()
{
    //dtor
}
