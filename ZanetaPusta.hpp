#ifndef ZANETAPUSTA_HPP
#define ZANETAPUSTA_HPP

#include "Zaneta.hpp"


class ZanetaPusta : public Zaneta
{
    public:
        void load() override { cout << "Wybrano bledna zanete, wracam do menu... " << endl; }
        ZanetaPusta();
        ~ZanetaPusta();
};

#endif // ZANETAPUSTA_HPP
