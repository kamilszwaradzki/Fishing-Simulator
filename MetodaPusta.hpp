#ifndef METODAPUSTA_HPP
#define METODAPUSTA_HPP

#include "Metoda.hpp"
#include "metoda_m.hpp"

class MetodaPusta : public Metoda
{
    public:
        VoidFunctionWithoutParameter show = wyborMetodaPusta;
        void load() override { show(); }
        MetodaPusta();
        ~MetodaPusta();
};

#endif // METODAPUSTA_HPP
