#ifndef MAXIZYW_HPP
#define MAXIZYW_HPP

#include "Sprzet.hpp"
#include "zywiec_m.hpp"
#include "Miejsce.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"

/// brief: Sprzet maksymalny na Zywca
class MaxiZyw : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = maxiz;
        void load() override { show(); }
        explicit MaxiZyw(const Miejsce &miejsce);
        ~MaxiZyw();
};

#endif // MAXIZYW_HPP
