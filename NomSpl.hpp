#ifndef NOMS_HPP
#define NOMS_HPP
#pragma once

#include "Sprzet.hpp"
#include "grunt_m.hpp"
#include "Miejsce.hpp"
#include "Ryba.hpp"
#include "Karp.hpp"
#include "Pomost.hpp"

/// brief: Sprzet nominalny na splawik
class NomSpl : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = nom; // miejsce: z brzegu, metoda: grunt/splawik
        void load() { show(); }
        NomSpl(Miejsce &miejsce, Ryba &ryba);
        ~NomSpl();
};

#endif // NOMS_HPP
