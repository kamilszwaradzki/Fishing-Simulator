#ifndef PSZENICA_HPP
#define PSZENICA_HPP

#include "Zaneta.hpp"


class Pszenica : public Zaneta
{
    public:
        void load() { cout << "Pszenica, Mnoznik: " << dbMultiplier << endl; }
        /** Default constructor */
        Pszenica();
        /** Default destructor */
        ~Pszenica();

    protected:

    private:
};

#endif // PSZENICA_HPP
