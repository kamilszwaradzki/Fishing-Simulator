#ifndef METODY_HPP_INCLUDED
#define METODY_HPP_INCLUDED
#pragma once

#include "Leszcz.hpp"
#include "Lin.hpp"
#include "Karp.hpp"
#include "Okon.hpp"
#include "Ploc.hpp"
#include "Sielawa.hpp"
#include "Sieja.hpp"
#include "Szczupak.hpp"
#include "Mietus.hpp"
#include "Wzdrega.hpp"
#include "Grunt.hpp"
#include "Splawik.hpp"
#include "Spinning.hpp"
#include "Zywiec.hpp"
#include "BackToMenu.hpp"
#include "MetodaPusta.hpp"

//metoda zalezy od ryby moga byc rozne
Metoda* getMetoda(Ryba &ryba, int &wybor);

#endif // METODY_HPP_INCLUDED
