#include "MiniZyw.hpp"

MiniZyw::MiniZyw(const Miejsce &miejsce)
{
    if(typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
        show = miniz1;
    } else {
        show = miniz;
    }
}

MiniZyw::~MiniZyw()
{
    //dtor
}
