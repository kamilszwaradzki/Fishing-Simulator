#pragma once
#include "autoloaderstdfunc.hpp"
#include "Ryba.hpp"
#include "Metoda.hpp"
#include "Grunt.hpp"
#include "Splawik.hpp"
#include "Spinning.hpp"
#include "Zywiec.hpp"
#include "ryby_m.hpp"
#include "utils.hpp"
#include "spinning_m.hpp"

class Szczupak : public Ryba {
    public:
    VoidFunctionWithoutParameter show = wyborszczupak;
    void load() override { show(); }
    Szczupak();
    ~Szczupak();
};
