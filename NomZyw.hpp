#ifndef NOMZYW_HPP
#define NOMZYW_HPP

#include "Sprzet.hpp"
#include "zywiec_m.hpp"

/// brief: Sprzet nominalny na Zywca
class NomZyw : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = nomz;
        void load() { show(); }
        /** Default constructor */
        NomZyw();
        /** Default destructor */
        ~NomZyw();

    protected:

    private:
};

#endif // NOMZYW_HPP
