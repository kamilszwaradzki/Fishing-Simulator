#pragma once
#include "autoloaderstdfunc.hpp"
#include "Ryba.hpp"
#include "Metoda.hpp"
#include "Grunt.hpp"
#include "Splawik.hpp"
#include "Spinning.hpp"
#include "ryby_m.hpp"
#include "utils.hpp"
#include "spinning_m.hpp"

class Wzdrega : public Ryba {
    public:
    VoidFunctionWithoutParameter show = wyborwzdrega;
    void load() override { show(); }
    Wzdrega();
    ~Wzdrega();
};
