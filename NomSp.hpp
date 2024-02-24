#ifndef NOMSP_HPP
#define NOMSP_HPP

#include "Sprzet.hpp"
#include "spinning_m.hpp"

/// brief: Sprzet nominalny na Spinning
class NomSp : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = noms1;
        void load() { show(); }
        /** Default constructor */
        NomSp();
        /** Default destructor */
        ~NomSp();

    protected:

    private:
};

#endif // NOMSP_HPP
