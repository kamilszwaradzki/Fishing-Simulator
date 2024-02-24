#ifndef MAXIGR_HPP
#define MAXIGR_HPP

#include "Sprzet.hpp"
#include "grunt_m.hpp"

/// brief: Sprzet maksymalny na Grunt
class MaxiGr : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = maxi;
        void load() { show(); }
        /** Default constructor */
        MaxiGr();
        /** Default destructor */
        ~MaxiGr();

    protected:

    private:
};

#endif // MAXIGR_HPP
