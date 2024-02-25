#ifndef MACZKAKOSTNA_HPP
#define MACZKAKOSTNA_HPP

#include "Zaneta.hpp"


class MaczkaKostna : public Zaneta
{
    public:
        void load() { cout << "Maczka Kostna, Mnoznik: " << dbMultiplier << endl; }
        /** Default constructor */
        MaczkaKostna();
        /** Default destructor */
        ~MaczkaKostna();

    protected:

    private:
};

#endif // MACZKAKOSTNA_HPP
