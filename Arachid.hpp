#ifndef ARACHID_HPP
#define ARACHID_HPP

#include "Zaneta.hpp"

class Arachid : public Zaneta
{
    public:
        void load() override { cout << "Arachid, Mnoznik: " << dbMultiplier << endl; }
        Arachid();
        ~Arachid();
};

#endif // ARACHID_HPP
