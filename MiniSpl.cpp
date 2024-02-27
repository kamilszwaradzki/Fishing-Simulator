#include "MiniSpl.hpp"

MiniSpl::MiniSpl(const Miejsce &miejsce, const Ryba &ryba)
{
    if(typeid(ryba) == typeid(Karp)) {
        if (typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
            show = minik1;
        } else {
            show = minik;
        }
    } else if(typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
        show = mini1;
    } else {
        show = mini;
    }
}

MiniSpl::~MiniSpl()
{
    //dtor
}
