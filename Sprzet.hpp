#ifndef SPRZET_HPP_INCLUDED
#define SPRZET_HPP_INCLUDED
#pragma once
#include "utils.hpp"

class Sprzet {
    public:
        VoidFunctionWithoutParameter show;
        virtual void load() = 0;
        virtual ~Sprzet() { };
};

#endif // SPRZET_HPP_INCLUDED
