#ifndef RZEPAK_HPP
#define RZEPAK_HPP

#include "Zaneta.hpp"


class Rzepak : public Zaneta
{
    public:
        void load() { cout << "Rzepak, Mnoznik: " << dbMultiplier << endl; }
        /** Default constructor */
        Rzepak();
        /** Default destructor */
        ~Rzepak();

    protected:

    private:
};

#endif // RZEPAK_HPP
