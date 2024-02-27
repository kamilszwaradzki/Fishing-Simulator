#pragma once
#include "utils.hpp"
#include "Metoda.hpp"
#include "autoloaderstdfunc.hpp"

class Ryba {

public:
    virtual void load() = 0;
    virtual ~Ryba() { };
};
