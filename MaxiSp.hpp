#ifndef MAXISP_HPP
#define MAXISP_HPP

#include "Sprzet.hpp"
#include "spinning_m.hpp"

/// brief: Sprzet maksymalny na Spinning
class MaxiSp : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = maxis1;
        void load() { show(); }
        /** Default constructor */
        MaxiSp();
        /** Default destructor */
        ~MaxiSp();

    protected:

    private:
};

#endif // MAXISP_HPP
