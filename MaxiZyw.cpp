#include "MaxiZyw.hpp"

MaxiZyw::MaxiZyw(const Miejsce &miejsce)
{
    if(typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
        show = maxiz1;
    } else {
        show = maxiz;
    }
}

MaxiZyw::~MaxiZyw()
{
    //dtor
}
