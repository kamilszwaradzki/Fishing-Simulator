#ifndef KREW_HPP
#define KREW_HPP

#include "Zaneta.hpp"


class Krew : public Zaneta
{
    public:
        void load() { cout << "Krew, Mnoznik: " << dbMultiplier << endl; }
        /** Default constructor */
        Krew();
        /** Default destructor */
        ~Krew();

    protected:

    private:
};

#endif // KREW_HPP
