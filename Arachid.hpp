#ifndef ARACHID_HPP
#define ARACHID_HPP

#include "Zaneta.hpp"

class Arachid : public Zaneta
{
    public:
        void load() { cout << "Arachid, Mnoznik: " << dbMultiplier << endl; }
        /** Default constructor */
        Arachid();
        /** Default destructor */
        ~Arachid();

    protected:
    private:
};

#endif // ARACHID_HPP
