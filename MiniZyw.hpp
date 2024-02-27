#ifndef MINIZYW_HPP
#define MINIZYW_HPP

#include "Sprzet.hpp"
#include "zywiec_m.hpp"
#include "Miejsce.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"

/// brief: Sprzet minimalny na Zywca
class MiniZyw : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = miniz;
        void load() override { show(); }
        explicit MiniZyw(const Miejsce &miejsce);
        ~MiniZyw();
};

#endif // MINIZYW_HPP
