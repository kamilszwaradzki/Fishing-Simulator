#ifndef ZYTO_HPP
#define ZYTO_HPP

#include "Zaneta.hpp"


class Zyto : public Zaneta
{
    public:
        void load() override { cout << "Zyto, Mnoznik: " << dbMultiplier << endl; }
        Zyto();
        ~Zyto();
};

#endif // ZYTO_HPP
