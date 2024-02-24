#pragma once
#include "Metoda.hpp"
#include "spinning_m.hpp"
#include "sprzet_m.hpp"

class Spinning: public Metoda {
public:
    VoidFunctionWithoutParameter show = wyborsprz;
    void load() { show(); }
    VoidFunctionWithoutParameter sprzety[3] = {
        minis1,
        noms1,
        maxis1
    };
    Spinning();
    ~Spinning();
};
