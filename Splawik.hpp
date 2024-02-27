#pragma once
#include "Metoda.hpp"
#include "grunt_m.hpp"
#include "sprzet_m.hpp"

class Splawik: public Metoda {
public:
    VoidFunctionWithoutParameter show = wyborsprz;
    void load() override { show(); }
    Splawik();
    ~Splawik();
};
