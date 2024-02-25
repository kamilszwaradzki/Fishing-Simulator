#ifndef SRUTA_HPP
#define SRUTA_HPP

#include "Zaneta.hpp"


class Sruta : public Zaneta
{
    public:
        void load() { cout << "Sruta, Mnoznik: " << dbMultiplier << endl; }
        /** Default constructor */
        Sruta();
        /** Default destructor */
        ~Sruta();

    protected:

    private:
};

#endif // SRUTA_HPP
