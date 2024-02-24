#pragma once
#include "utils.hpp"
#include "Ryba.hpp"

class Miejsce {
    public:
        VoidFunctionWithoutParameter show;
        virtual void load() = 0;
        //std::array<std::unique_ptr<Ryba>, 10> ryby;
//    Miejsce(const Miejsce&);
        virtual ~Miejsce() { };
};
