#ifndef PINKAOCHOTKA_HPP
#define PINKAOCHOTKA_HPP

#include "Zaneta.hpp"


class PinkaOchotka : public Zaneta
{
    public:
        void load() { cout << "Pinka/Ochotka, Mnoznik: " << dbMultiplier << endl; }
        /** Default constructor */
        PinkaOchotka();
        /** Default destructor */
        ~PinkaOchotka();

    protected:

    private:
};

#endif // PINKAOCHOTKA_HPP
