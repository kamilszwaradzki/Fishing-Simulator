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
// do usuniêcia
#include "dodatki.hpp"

class MenuManager
{
    public:
        /** Default constructor */
        MenuManager(Symulator &symulator, int &wybor);
        /** Default destructor */
        ~MenuManager();

    protected:

    private:
};

#endif // MENUMANAGER_HPP
