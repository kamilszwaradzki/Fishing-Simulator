#ifndef KOPER_HPP
#define KOPER_HPP

#include "Zaneta.hpp"


class Koper : public Zaneta
{
    public:
        void load() override { cout << "Koper, Mnoznik: " << dbMultiplier << endl; }
        Koper();
        ~Koper();
};

#endif // KOPER_HPP
