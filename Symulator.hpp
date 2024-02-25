#ifndef SYMULATOR_HPP
#define SYMULATOR_HPP
#include "Jezioro.hpp"
#include "Miejsce.hpp"
#include "Ryba.hpp"
#include "Metoda.hpp"
#include "Sprzet.hpp"
#include "Zaneta.hpp"

class Symulator
{
    public:
        /** Default constructor */
        Symulator();
        /** Default destructor */
        virtual ~Symulator();

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

    protected:

    private:
        Jezioro* jezioro; //!< Member variable "jezioro"
        Miejsce* miejsce; //!< Member variable "miejsce"
        Ryba* ryba; //!< Member variable "ryba"
        Metoda* metoda; //!< Member variable "metoda"
        Sprzet* sprzet; //!< Member variable "sprzet"
        Zaneta* zaneta; //!< Member variable "zaneta"
};

#endif // SYMULATOR_HPP
