#ifndef RYBAPUSTA_HPP
#define RYBAPUSTA_HPP

#include "Ryba.hpp"
#include "ryby_m.hpp"

class RybaPusta : public Ryba
{
    public:
        VoidFunctionWithoutParameter show = wyborRybaPusta;
        void load() override { show(); }
        RybaPusta();
        ~RybaPusta();
};

#endif // RYBAPUSTA_HPP
