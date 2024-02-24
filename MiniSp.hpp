#ifndef MINISP_HPP
#define MINISP_HPP

#include "Sprzet.hpp"
#include "spinning_m.hpp"

/// brief: Sprzet minimalny na Spinning
class MiniSp : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = minis1;
        void load() { show(); }
        /** Default constructor */
        MiniSp();
        /** Default destructor */
        ~MiniSp();

    protected:

    private:
};

#endif // MINISP_HPP
