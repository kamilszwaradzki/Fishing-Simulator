#pragma once
#include "Metoda.hpp"
#include "spinning_m.hpp"
#include "sprzet_m.hpp"

class Spinning: public Metoda {
public:
    VoidFunctionWithoutParameter show = wyborsprz;
    void load() override { show(); }
    Spinning();
    ~Spinning();
};
