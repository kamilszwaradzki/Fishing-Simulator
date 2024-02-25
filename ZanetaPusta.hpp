#ifndef ZANETAPUSTA_HPP
#define ZANETAPUSTA_HPP

#include "Zaneta.hpp"


class ZanetaPusta : public Zaneta
{
    public:
        void load() { cout << "Wybrano bledna zanete, wracam do menu... " << endl; }
        /** Default constructor */
        ZanetaPusta();
        /** Default destructor */
        ~ZanetaPusta();

    protected:
    private:
};

#endif // ZANETAPUSTA_HPP
