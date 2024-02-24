#ifndef NOMGR_HPP
#define NOMGR_HPP

#include "Sprzet.hpp"
#include "grunt_m.hpp"

/// brief: Sprzet nominalny na Grunt
class NomGr : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = nom;
        void load() { show(); }
        /** Default constructor */
        NomGr();
        /** Default destructor */
        ~NomGr();

    protected:

    private:
};

#endif // NOMGR_HPP
