#ifndef KREW_HPP
#define KREW_HPP

#include "Zaneta.hpp"


class Krew : public Zaneta
{
    public:
        void load() override { cout << "Krew, Mnoznik: " << dbMultiplier << endl; }
        Krew();
        ~Krew();
};

#endif // KREW_HPP
