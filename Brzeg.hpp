#pragma once
#include "autoloaderstdfunc.hpp"
#include "Ryba.hpp"
#include "Leszcz.hpp"
#include "Lin.hpp"
#include "Karp.hpp"
#include "Okon.hpp"
#include "Ploc.hpp"
#include "Sielawa.hpp"
#include "Sieja.hpp"
#include "Szczupak.hpp"
#include "Mietus.hpp"
#include "Wzdrega.hpp"
#include "Miejsce.hpp"
#include "utils.hpp"
#include "ryby_m.hpp"


class Brzeg: public Miejsce {
    public:
        VoidFunctionWithoutParameter show = ryba1;
        void load() override { show(); }
    Brzeg();
    ~Brzeg();
};
