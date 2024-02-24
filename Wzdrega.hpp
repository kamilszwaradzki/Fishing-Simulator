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

class Wzdrega : public Ryba {
    public:
    VoidFunctionWithoutParameter show = wyborwzdrega;
    void load() { show(); }
    /*std::array<std::unique_ptr<Metoda>, 3> metody = {
        std::make_unique<Grunt>(),
        std::make_unique<Splawik>(),
        std::make_unique<Spinning>(),
    };*/
    Wzdrega();
    ~Wzdrega();
};
