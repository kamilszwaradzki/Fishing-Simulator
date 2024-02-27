#ifndef RZEPAK_HPP
#define RZEPAK_HPP

#include "Zaneta.hpp"


class Rzepak : public Zaneta
{
    public:
        void load() override { cout << "Rzepak, Mnoznik: " << dbMultiplier << endl; }
        Rzepak();
        ~Rzepak();
};

#endif // RZEPAK_HPP
