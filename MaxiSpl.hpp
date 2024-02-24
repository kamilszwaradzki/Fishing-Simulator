#ifndef MAXIS_HPP
#define MAXIS_HPP
#pragma once

#include "Sprzet.hpp"
#include "grunt_m.hpp"
#include "Miejsce.hpp"
#include "Ryba.hpp"
#include "Karp.hpp"
#include "Pomost.hpp"

/// brief: Sprzet maksymalny na splawik
class MaxiSpl : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = maxi; // miejsce: z brzegu, metoda: grunt/splawik
        void load() { show(); }
        MaxiSpl(Miejsce &miejsce, Ryba &ryba);
        ~MaxiSpl();
};

#endif // MAXIS_HPP
