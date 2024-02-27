#ifndef SRUTA_HPP
#define SRUTA_HPP

#include "Zaneta.hpp"


class Sruta : public Zaneta
{
    public:
        void load() override { cout << "Sruta, Mnoznik: " << dbMultiplier << endl; }
        Sruta();
        ~Sruta();
};

#endif // SRUTA_HPP
