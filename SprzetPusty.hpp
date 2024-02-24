#ifndef SPRZETPUSTY_HPP
#define SPRZETPUSTY_HPP

#include "Sprzet.hpp"
#include "sprzet_m.hpp"

class SprzetPusty : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = wyborSprzetPusty;
        void load() { show(); }
        /** Default constructor */
        SprzetPusty();
        /** Default destructor */
        ~SprzetPusty();

    protected:

    private:
};

#endif // SPRZETPUSTY_HPP
