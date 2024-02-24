#pragma once
#ifndef LIBS_IMP_CLASS
    #define LIBS_IMP_CLASS
    #pragma once
    #include <iostream>
    #include <array>
    #include <memory>
#endif
#include "Ryba.hpp"
#include "Leszcz.hpp"
#include "Lin.hpp"
#include "Karp.hpp"
#include "Okon.hpp"
#include "Ploc.hpp"
#include "Sielawa.hpp"
#include "Sieja.hpp"
#include "Szczupak.hpp"
#include "Mietus.hpp"
#include "Wzdrega.hpp"
#include "Miejsce.hpp"
#include "utils.hpp"
#include "ryby_m.hpp"

/// @brief Klasa reprezentująca miejsce na jeziorze
class Lod: public Miejsce {
    public:
        VoidFunctionWithoutParameter show = ryba2;
        void load() { show(); }
        /*std::array<std::unique_ptr<Ryba>, 8> ryby = {
            std::make_unique<Leszcz>(),
            std::make_unique<Okon>(),
            std::make_unique<Ploc>(),
            std::make_unique<Sielawa>(),
            std::make_unique<Sieja>(),
            std::make_unique<Szczupak>(),
            std::make_unique<Mietus>(),
            std::make_unique<Wzdrega>(),
    };*/
    Lod();
    ~Lod();
};
