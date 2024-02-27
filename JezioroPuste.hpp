#ifndef JEZIOROPUSTE_HPP
#define JEZIOROPUSTE_HPP
#pragma once
#include "Jezioro.hpp"
#include "jezioro_m.hpp"

class JezioroPuste : public Jezioro
{
    public:
        VoidFunctionWithoutParameter show = wyborJezioroPusta;
        void load() override { show(); }
        JezioroPuste();
        ~JezioroPuste();
};

#endif // JEZIOROPUSTE_HPP
