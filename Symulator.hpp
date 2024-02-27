#ifndef SYMULATOR_HPP
#define SYMULATOR_HPP
#pragma once
#include "Jezioro.hpp"
#include "JezioroPuste.hpp"
#include "Miejsce.hpp"
#include "MiejscePuste.hpp"
#include "Ryba.hpp"
#include "RybaPusta.hpp"
#include "Metoda.hpp"
#include "MetodaPusta.hpp"
#include "Sprzet.hpp"
#include "SprzetPusty.hpp"
#include "Zaneta.hpp"
#include "ZanetaPusta.hpp"

class Symulator
{
    public:
        Symulator();
        ~Symulator();

        /** Access jezioro
         * \return The current value of jezioro
         */
        Jezioro* Getjezioro() { return jezioro; }
        /** Set jezioro
         * \param val New value to set
         */
        void Setjezioro(Jezioro &val) { jezioro = &val; }
        /** Access miejsce
         * \return The current value of miejsce
         */
        Miejsce* Getmiejsce() { return miejsce; }
        /** Set miejsce
         * \param val New value to set
         */
        void Setmiejsce(Miejsce &val) { miejsce = &val; }
        /** Access ryba
         * \return The current value of ryba
         */
        Ryba* Getryba() { return ryba; }
        /** Set ryba
         * \param val New value to set
         */
        void Setryba(Ryba &val) { ryba = &val; }
        /** Access metoda
         * \return The current value of metoda
         */
        Metoda* Getmetoda() { return metoda; }
        /** Set metoda
         * \param val New value to set
         */
        void Setmetoda(Metoda &val) { metoda = &val; }
        /** Access sprzet
         * \return The current value of sprzet
         */
        Sprzet* Getsprzet() { return sprzet; }
        /** Set sprzet
         * \param val New value to set
         */
        void Setsprzet(Sprzet &val) { sprzet = &val; }
        /** Access zaneta
         * \return The current value of zaneta
         */
        Zaneta* Getzaneta() { return zaneta; }
        /** Set zaneta
         * \param val New value to set
         */
        void Setzaneta(Zaneta &val) { zaneta = &val; }

    private:
        Jezioro* jezioro = new JezioroPuste(); //!< Member variable "jezioro"
        Miejsce* miejsce = new MiejscePuste(); //!< Member variable "miejsce"
        Ryba* ryba = new RybaPusta(); //!< Member variable "ryba"
        Metoda* metoda = new MetodaPusta(); //!< Member variable "metoda"
        Sprzet* sprzet = new SprzetPusty(); //!< Member variable "sprzet"
        Zaneta* zaneta = new ZanetaPusta(); //!< Member variable "zaneta"
};

#endif // SYMULATOR_HPP
