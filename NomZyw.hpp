#ifndef NOMZYW_HPP
#define NOMZYW_HPP

#include "Sprzet.hpp"
#include "zywiec_m.hpp"
#include "Miejsce.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"

/// brief: Sprzet nominalny na Zywca
class NomZyw : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = nomz;
        void load() override { show(); }
        NomZyw(const Miejsce &miejsce);
        ~NomZyw();
};

#endif // NOMZYW_HPP
