#pragma once
#include "autoloaderstdfunc.hpp"
#include "Ryba.hpp"
#include "Metoda.hpp"
#include "Grunt.hpp"
#include "Splawik.hpp"
#include "Spinning.hpp"
#include "ryby_m.hpp"
#include "utils.hpp"

class Sieja : public Ryba {
    public:
    VoidFunctionWithoutParameter show = wyborsieja;
    void load() override { show(); }
    Sieja();
    ~Sieja();
};
