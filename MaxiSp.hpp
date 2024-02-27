#ifndef MAXISP_HPP
#define MAXISP_HPP

#include "Sprzet.hpp"
#include "spinning_m.hpp"
#include "Miejsce.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"

/// brief: Sprzet maksymalny na Spinning
class MaxiSp : public Sprzet
{
    public:
        VoidFunctionWithoutParameter show = maxis1;
        void load() override { show(); }
        explicit MaxiSp(const Miejsce &miejsce);
        ~MaxiSp();
};

#endif // MAXISP_HPP
