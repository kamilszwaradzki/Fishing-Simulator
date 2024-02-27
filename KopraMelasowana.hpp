#ifndef KOPRAMELASOWANA_HPP
#define KOPRAMELASOWANA_HPP

#include "Zaneta.hpp"


class KopraMelasowana : public Zaneta
{
    public:
        void load() override { cout << "Kopra Melasowana, Mnoznik: " << dbMultiplier << endl; }
        KopraMelasowana();
        ~KopraMelasowana();
};

#endif // KOPRAMELASOWANA_HPP
