#ifndef MINIGR_HPP
#define MINIGR_HPP

#include "Sprzet.hpp"
#include "grunt_m.hpp"

/// brief: Sprzet minimalny na Grunt
class MiniGr : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = mini;
        void load() { show(); }
        /** Default constructor */
        MiniGr();
        /** Default destructor */
        ~MiniGr();

    protected:

    private:
};

#endif // MINIGR_HPP
