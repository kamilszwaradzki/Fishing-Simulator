#ifndef SPRZETPUSTY_HPP
#define SPRZETPUSTY_HPP

#include "Sprzet.hpp"
#include "sprzet_m.hpp"

class SprzetPusty : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = wyborSprzetPusty;
        void load() override { show(); }
        SprzetPusty();
        ~SprzetPusty();
};

#endif // SPRZETPUSTY_HPP
