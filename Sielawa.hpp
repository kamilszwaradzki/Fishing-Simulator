#pragma once
#include "autoloaderstdfunc.hpp"
#include "Ryba.hpp"
#include "Metoda.hpp"
#include "Grunt.hpp"
#include "Splawik.hpp"
#include "Spinning.hpp"
#include "ryby_m.hpp"
#include "utils.hpp"

class Sielawa : public Ryba {
    public:
    VoidFunctionWithoutParameter show = wyborsielawa;
    void load() override { show(); }
    Sielawa();
    ~Sielawa();
};
