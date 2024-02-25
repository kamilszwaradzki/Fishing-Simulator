#ifndef ZYTO_HPP
#define ZYTO_HPP

#include "Zaneta.hpp"


class Zyto : public Zaneta
{
    public:
        void load() { cout << "Zyto, Mnoznik: " << dbMultiplier << endl; }
        /** Default constructor */
        Zyto();
        /** Default destructor */
        ~Zyto();

    protected:

    private:
};

#endif // ZYTO_HPP
