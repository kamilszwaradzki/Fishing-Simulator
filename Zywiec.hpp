#pragma once
#include "Metoda.hpp"
#include "zywiec_m.hpp"
#include "sprzet_m.hpp"

class Zywiec: public Metoda {
public:
    VoidFunctionWithoutParameter show = wyborsprz;
    void load() { show(); }
    VoidFunctionWithoutParameter sprzety[3] = {
        miniz,
        nomz,
        maxiz
    };
    Zywiec();
    ~Zywiec();
};
