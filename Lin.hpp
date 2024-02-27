#pragma once
#include "autoloaderstdfunc.hpp"
#include "Ryba.hpp"
#include "Metoda.hpp"
#include "Grunt.hpp"
#include "Splawik.hpp"
#include "Spinning.hpp"
#include "ryby_m.hpp"
#include "utils.hpp"

class Lin : public Ryba {
    public:
    VoidFunctionWithoutParameter show = wyborlin;
    void load() override { show(); };
    Lin();
    ~Lin();
};
