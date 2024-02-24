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

class Karp : public Ryba {
    public:
    VoidFunctionWithoutParameter show = wyborkarp;
    void load() { show(); }
/*    std::array<std::unique_ptr<Metoda>, 2> metody = {
        std::make_unique<Grunt>(),
        std::make_unique<Splawik>()
    };*/
    Karp();
    ~Karp();
};
