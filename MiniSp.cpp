#include "MiniSp.hpp"

MiniSp::MiniSp(const Miejsce &miejsce)
{
    if(typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
        show = minis;
    } else {
        show = minis1;
    }
}

MiniSp::~MiniSp()
{
    //dtor
}
