#pragma once
#include "utils.hpp"
#include "Metoda.hpp"
#ifndef LIBS_IMP_CLASS
    #define LIBS_IMP_CLASS
    #pragma once
    #include <iostream>
    #include <array>
    #include <memory>
#endif

class Ryba {

public:
    //VoidFunctionWithoutParameter show = placeholder;
    virtual void load() = 0;
    virtual ~Ryba() { };
};
