#pragma once
#include "Metoda.hpp"
#include "zywiec_m.hpp"
#include "sprzet_m.hpp"

class Zywiec: public Metoda {
public:
    VoidFunctionWithoutParameter show = wyborsprz;
    void load() override { show(); }
    Zywiec();
    ~Zywiec();
};
