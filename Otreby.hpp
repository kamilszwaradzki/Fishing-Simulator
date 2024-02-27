#ifndef OTREBY_HPP
#define OTREBY_HPP

#include "Zaneta.hpp"


class Otreby : public Zaneta
{
    public:
        void load() override { cout << "Otreby, Mnoznik: " << dbMultiplier << endl; }
        Otreby();
        ~Otreby();
};

#endif // OTREBY_HPP
