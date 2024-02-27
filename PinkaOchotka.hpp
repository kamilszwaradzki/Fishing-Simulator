#ifndef PINKAOCHOTKA_HPP
#define PINKAOCHOTKA_HPP

#include "Zaneta.hpp"


class PinkaOchotka : public Zaneta
{
    public:
        void load() override { cout << "Pinka/Ochotka, Mnoznik: " << dbMultiplier << endl; }
        PinkaOchotka();
        ~PinkaOchotka();
};

#endif // PINKAOCHOTKA_HPP
