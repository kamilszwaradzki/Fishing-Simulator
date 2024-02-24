#pragma once
#include "utils.hpp"

class Metoda {
    public:
        VoidFunctionWithoutParameter show;
        virtual void load() = 0;
        VoidFunctionWithoutParameter sprzety[3]; // type for array of void functions without parameter
        virtual ~Metoda() { };
};
