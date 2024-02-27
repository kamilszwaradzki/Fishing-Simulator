#pragma once
#include "autoloaderstdfunc.hpp"
#include "Ryba.hpp"
#include "Metoda.hpp"
#include "Grunt.hpp"
#include "Splawik.hpp"
#include "Spinning.hpp"
#include "ryby_m.hpp"
#include "utils.hpp"

class Leszcz : public Ryba {
    public:
    VoidFunctionWithoutParameter show = wyborles;
    void load() override { show(); }
    Leszcz();
    ~Leszcz();
};
