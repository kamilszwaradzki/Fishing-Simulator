#ifndef NOMSP_HPP
#define NOMSP_HPP

#include "Sprzet.hpp"
#include "spinning_m.hpp"
#include "Miejsce.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"

/// brief: Sprzet nominalny na Spinning
class NomSp : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = noms1;
        void load() override { show(); }
        NomSp(const Miejsce &miejsce);
        ~NomSp();
};

#endif // NOMSP_HPP
