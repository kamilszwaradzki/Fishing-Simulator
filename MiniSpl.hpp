#ifndef MINIS_HPP_INCLUDED
#define MINIS_HPP_INCLUDED
#pragma once

#include "Sprzet.hpp"
#include "grunt_m.hpp"
#include "Miejsce.hpp"
#include "Ryba.hpp"
#include "Karp.hpp"
#include "Pomost.hpp"

/// brief: Sprzet minimalny na splawik
class MiniSpl: public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = mini; // miejsce: z brzegu, metoda: grunt/splawik
        void load() { show(); }
        MiniSpl(Miejsce &miejsce, Ryba &ryba);
        ~MiniSpl();
};

#endif // MINIS_HPP_INCLUDED
