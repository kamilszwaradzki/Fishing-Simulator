#include "MiniSpl.hpp"

MiniSpl::MiniSpl(Miejsce &miejsce, Ryba &ryba)
{
    if(typeid(ryba) == typeid(Karp)) {
        if (typeid(miejsce) == typeid(Pomost)) {
            show = minik1;
        } else {
            show = minik;
        }
    } else if(typeid(miejsce) == typeid(Pomost)) {
        show = mini1;
    } else {
        show = mini;
    }
}

MiniSpl::~MiniSpl()
{
    //dtor
}
