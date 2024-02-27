#ifndef PSZENICA_HPP
#define PSZENICA_HPP

#include "Zaneta.hpp"


class Pszenica : public Zaneta
{
    public:
        void load() override { cout << "Pszenica, Mnoznik: " << dbMultiplier << endl; }
        Pszenica();
        ~Pszenica();
};

#endif // PSZENICA_HPP
