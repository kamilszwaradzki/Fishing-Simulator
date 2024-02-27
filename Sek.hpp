#pragma once
#include "autoloaderstdfunc.hpp"
#include "Miejsce.hpp"
#include "Brzeg.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"
#include "Lod.hpp"
#include "Jezioro.hpp"
#include "utils.hpp"
#include "miejsce_m.hpp"


class Sek: public Jezioro {
    public:
        VoidFunctionWithoutParameter show = wybor;
        void load() override { show(); }
        Sek();
        ~Sek();
};
