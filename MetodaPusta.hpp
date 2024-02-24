#ifndef METODAPUSTA_HPP
#define METODAPUSTA_HPP

#include "Metoda.hpp"
#include "metoda_m.hpp"

class MetodaPusta : public Metoda
{
    public:
        VoidFunctionWithoutParameter show = wyborMetodaPusta;
        void load() { show(); }
        /** Default constructor */
        MetodaPusta();
        /** Default destructor */
        ~MetodaPusta();
};

#endif // METODAPUSTA_HPP
