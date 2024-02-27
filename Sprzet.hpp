#ifndef SPRZET_HPP_INCLUDED
#define SPRZET_HPP_INCLUDED
#pragma once
#include "utils.hpp"

class Sprzet {
    public:
        virtual void load() = 0;
        virtual ~Sprzet() { };
};

#endif // SPRZET_HPP_INCLUDED
