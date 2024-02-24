#pragma once
#ifndef LIBS_IMP_CLASS
    #define LIBS_IMP_CLASS
    #pragma once
    #include <iostream>
    #include <array>
    #include <memory>
#endif
#include "Miejsce.hpp"
#include "Brzeg.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"
#include "Lod.hpp"
#include "Jezioro.hpp"
#include "utils.hpp"
#include "miejsce_m.hpp"


class Lanskie: public Jezioro {
    public:
        VoidFunctionWithoutParameter show = wybor;
        void load() { show(); }
        /*std::array<std::unique_ptr<Miejsce>, 4> miejsca = {
            std::make_unique<Brzeg>(),
            std::make_unique<Pomost>(),
            std::make_unique<Lodz>(),
            std::make_unique<Lod>()
    };*/
        Lanskie();
        ~Lanskie();
};
