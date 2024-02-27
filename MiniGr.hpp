#ifndef MINIGR_HPP
#define MINIGR_HPP

#include "Sprzet.hpp"
#include "grunt_m.hpp"
#include "Miejsce.hpp"
#include "Ryba.hpp"
#include "Karp.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"

/// brief: Sprzet minimalny na Grunt
class MiniGr : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = mini;
        void load() override { show(); }
        MiniGr(const Miejsce &miejsce, const Ryba &ryba);
        ~MiniGr();
};

#endif // MINIGR_HPP
