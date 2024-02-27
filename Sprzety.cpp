#include "Sprzety.hpp"

// Sprzet jest zalezny od miejsca, potem ryby, a na koncu metody
Sprzet* getSprzet(const Miejsce &miejsce, const Ryba &ryba, const Metoda &metoda, const int &wybor) {
    switch(wybor) {
        case 1: {
            if (typeid(metoda) == typeid(Splawik)) {
                return new MiniSpl(miejsce, ryba); // tu przekazujemy rybe oraz miejsce jako decydujace czynniki dla zw. sprzetu
            } else if (typeid(metoda) == typeid(Grunt)) {
                return new MiniGr(miejsce, ryba);
            } else if (typeid(metoda) == typeid(Spinning)) {
                return new MiniSp(miejsce);
            } else if (typeid(metoda) == typeid(Zywiec)) {
                return new MiniZyw(miejsce);
            }
        }
        case 2: {
            if (typeid(metoda) == typeid(Splawik)) {
                return new NomSpl(miejsce, ryba); // tu przekazujemy rybe oraz miejsce jako decydujace czynniki dla zw. sprzetu
            } else if (typeid(metoda) == typeid(Grunt)) {
                return new NomGr(miejsce, ryba);
            } else if (typeid(metoda) == typeid(Spinning)) {
                return new NomSp(miejsce);
            } else if (typeid(metoda) == typeid(Zywiec)) {
                return new NomZyw(miejsce);
            }
        }
        case 3: {
            if (typeid(metoda) == typeid(Splawik)) {
                return new MaxiSpl(miejsce, ryba); // tu przekazujemy rybe oraz miejsce jako decydujace czynniki dla zw. sprzetu
            } else if (typeid(metoda) == typeid(Grunt)) {
                return new MaxiGr(miejsce, ryba);
            } else if (typeid(metoda) == typeid(Spinning)) {
                return new MaxiSp(miejsce);
            } else if (typeid(metoda) == typeid(Zywiec)) {
                return new MaxiZyw(miejsce);
            }
        }
        case 4: {
            return new BackToMenu();
        }
        default: {
            return new SprzetPusty();
        }
    }
}
