#ifndef BACKTOMENU_HPP
#define BACKTOMENU_HPP

#pragma once
#include "Jezioro.hpp"
#include "Miejsce.hpp"
#include "Ryba.hpp"
#include "Metoda.hpp"
#include "Sprzet.hpp"
#include "Zaneta.hpp"

class BackToMenu : public Jezioro, public Miejsce, public Ryba, public Metoda, public Sprzet, public Zaneta
{
    public:
        VoidFunctionWithoutParameter show = backToMenuFunction;
        void load() { show(); }
        /** Default constructor */
        BackToMenu();
        /** Default destructor */
        ~BackToMenu();

    protected:

    private:
};

#endif // BACKTOMENU_HPP
