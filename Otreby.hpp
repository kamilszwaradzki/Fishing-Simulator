#ifndef OTREBY_HPP
#define OTREBY_HPP

#include "Zaneta.hpp"


class Otreby : public Zaneta
{
    public:
        void load() { cout << "Otreby, Mnoznik: " << dbMultiplier << endl; }
        /** Default constructor */
        Otreby();
        /** Default destructor */
        ~Otreby();

    protected:
    private:
};

#endif // OTREBY_HPP
