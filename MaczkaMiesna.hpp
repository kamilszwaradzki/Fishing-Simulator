#ifndef MACZKAMIESNA_HPP
#define MACZKAMIESNA_HPP

#include "Zaneta.hpp"


class MaczkaMiesna : public Zaneta
{
    public:
        void load() override { cout << "Maczka Miesna, Mnoznik: " << dbMultiplier << endl; }
        MaczkaMiesna();
        ~MaczkaMiesna();
};

#endif // MACZKAMIESNA_HPP
