#ifndef RYBY_HPP_INCLUDED
#define RYBY_HPP_INCLUDED
#pragma once

#include "Ryba.hpp"
#include "Miejsce.hpp"
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
#include "Brzeg.hpp"
#include "Pomost.hpp"
#include "Lodz.hpp"
#include "Lod.hpp"
#include "BackToMenu.hpp"
#include "RybaPusta.hpp"

// pobiera rybe w zaleznosci od miejsca i wyboru
Ryba* getRyba(const Miejsce &miejsce, const int &wybor);

#endif // RYBY_HPP_INCLUDED
