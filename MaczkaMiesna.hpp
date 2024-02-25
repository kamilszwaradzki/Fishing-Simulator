#ifndef MACZKAMIESNA_HPP
#define MACZKAMIESNA_HPP

#include "Zaneta.hpp"


class MaczkaMiesna : public Zaneta
{
    public:
        void load() { cout << "Maczka Miesna, Mnoznik: " << dbMultiplier << endl; }
        /** Default constructor */
        MaczkaMiesna();
        /** Default destructor */
        ~MaczkaMiesna();

    protected:

    private:
};

#endif // MACZKAMIESNA_HPP
