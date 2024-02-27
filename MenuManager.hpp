#ifndef MENUMANAGER_HPP
#define MENUMANAGER_HPP
#pragma once
#include "utils.hpp"
#include "Symulator.hpp"
#include "Jeziora.hpp"
#include "Miejsca.hpp"
#include "Ryby.hpp"
#include "Metody.hpp"
#include "Sprzety.hpp"
#include "Zanety.hpp"
#include "RybyLosowane.hpp"
#include "rys.hpp"
#include "autoloaderstdfunc.hpp"
// do usuniêcia
#include "dodatki.hpp"

class MenuManager
{
    public:
        MenuManager(Symulator &symulator, int &wybor);
        ~MenuManager();
};

#endif // MENUMANAGER_HPP
