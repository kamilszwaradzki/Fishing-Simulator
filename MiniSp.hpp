#ifndef MINISP_HPP
#define MINISP_HPP

#include "Sprzet.hpp"
#include "spinning_m.hpp"
#include "Miejsce.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"

/// brief: Sprzet minimalny na Spinning
class MiniSp : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = minis1;
        void load() override { show(); }
        explicit MiniSp(const Miejsce &miejsce);
        ~MiniSp();

    protected:

    private:
};

#endif // MINISP_HPP
