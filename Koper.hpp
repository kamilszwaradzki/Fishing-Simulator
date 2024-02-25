#ifndef KOPER_HPP
#define KOPER_HPP

#include "Zaneta.hpp"


class Koper : public Zaneta
{
    public:
        void load() { cout << "Koper, Mnoznik: " << dbMultiplier << endl; }
        /** Default constructor */
        Koper();
        /** Default destructor */
        ~Koper();

    protected:

    private:
};

#endif // KOPER_HPP
