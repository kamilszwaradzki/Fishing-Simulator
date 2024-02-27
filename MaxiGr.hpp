#ifndef MAXIGR_HPP
#define MAXIGR_HPP

#include "Sprzet.hpp"
#include "grunt_m.hpp"
#include "Miejsce.hpp"
#include "Ryba.hpp"
#include "Karp.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"

/// brief: Sprzet maksymalny na Grunt
class MaxiGr : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = maxi;
        void load() override { show(); }
        MaxiGr(const Miejsce &miejsce, const Ryba &ryba);
        ~MaxiGr();
};

#endif // MAXIGR_HPP
