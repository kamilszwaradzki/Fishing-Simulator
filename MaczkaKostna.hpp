#ifndef MACZKAKOSTNA_HPP
#define MACZKAKOSTNA_HPP

#include "Zaneta.hpp"


class MaczkaKostna : public Zaneta
{
    public:
        void load() override { cout << "Maczka Kostna, Mnoznik: " << dbMultiplier << endl; }
        MaczkaKostna();
        ~MaczkaKostna();
};

#endif // MACZKAKOSTNA_HPP
