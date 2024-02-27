#ifndef NOMGR_HPP
#define NOMGR_HPP

#include "Sprzet.hpp"
#include "grunt_m.hpp"
#include "Miejsce.hpp"
#include "Ryba.hpp"
#include "Karp.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"

/// brief: Sprzet nominalny na Grunt
class NomGr : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = nom;
        void load() override { show(); }
        NomGr(const Miejsce &miejsce, const Ryba &ryba);
        ~NomGr();
};

#endif // NOMGR_HPP
