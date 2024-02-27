#pragma once
#include "utils.hpp"
#include "Ryba.hpp"

class Miejsce {
    public:
        virtual void load() = 0;
        virtual ~Miejsce() { };
};
