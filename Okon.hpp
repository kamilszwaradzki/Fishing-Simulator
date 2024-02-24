#pragma once
#ifndef LIBS_IMP_CLASS
    #define LIBS_IMP_CLASS
    #pragma once
    #include <iostream>
    #include <array>
    #include <memory>
#endif
#include "Ryba.hpp"
#include "Metoda.hpp"
#include "Grunt.hpp"
#include "Splawik.hpp"
#include "Spinning.hpp"
#include "ryby_m.hpp"
#include "utils.hpp"
#include "spinning_m.hpp"

class Okon : public Ryba {
    public:
    VoidFunctionWithoutParameter show = wyborokon;
    void load() { show(); }
    /*
    std::array<std::unique_ptr<Metoda>, 2> metody = {
        std::make_unique<Spinning>(),
        std::make_unique<Splawik>()
    };*/
    Okon();
    ~Okon();
};
