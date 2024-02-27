#ifndef NOMS_HPP
#define NOMS_HPP
#pragma once

#include "Sprzet.hpp"
#include "grunt_m.hpp"
#include "Miejsce.hpp"
#include "Ryba.hpp"
#include "Karp.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"

/// brief: Sprzet nominalny na splawik
class NomSpl : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = nom; // miejsce: z brzegu, metoda: grunt/splawik
        void load() override { show(); }
        NomSpl(const Miejsce &miejsce, const Ryba &ryba);
        ~NomSpl();
};

#endif // NOMS_HPP
