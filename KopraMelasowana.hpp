#ifndef KOPRAMELASOWANA_HPP
#define KOPRAMELASOWANA_HPP

#include "Zaneta.hpp"


class KopraMelasowana : public Zaneta
{
    public:
        void load() { cout << "Kopra Melasowana, Mnoznik: " << dbMultiplier << endl; }
        /** Default constructor */
        KopraMelasowana();
        /** Default destructor */
        ~KopraMelasowana();

    protected:

    private:
};

#endif // KOPRAMELASOWANA_HPP
