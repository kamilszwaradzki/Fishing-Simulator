#ifndef ZANETA_HPP
#define ZANETA_HPP
#pragma once
#include "autoloaderstdfunc.hpp"

class Zaneta
{
    public:
        double GetdbMultiplier() { return dbMultiplier; }
        virtual void load() = 0;
        Zaneta(const double dbMultiplier);
        virtual ~Zaneta();

    protected:
        const double dbMultiplier;
};

#endif // ZANETA_HPP
