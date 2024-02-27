#include "Sprzety.hpp"

// Sprzet jest zalezny od miejsca, potem ryby, a na koncu metody
Sprzet* getSprzet(const Miejsce &miejsce, const Ryba &ryba, const Metoda &metoda, const int &wybor) {
    switch(wybor) {
        case 1: {
            if (typeid(metoda) == typeid(Splawik))
                return new MiniSpl(miejsce, ryba); // tu przekazujemy rybe oraz miejsce jako decydujace czynniki dla zw. sprzetu
            if (typeid(metoda) == typeid(Grunt))
                return new MiniGr(miejsce, ryba);
            if (typeid(metoda) == typeid(Spinning))
                return new MiniSp(miejsce);
            if (typeid(metoda) == typeid(Zywiec))
                return new MiniZyw(miejsce);
            break;
        }
        case 2: {
            if (typeid(metoda) == typeid(Splawik))
                return new NomSpl(miejsce, ryba); // tu przekazujemy rybe oraz miejsce jako decydujace czynniki dla zw. sprzetu
            if (typeid(metoda) == typeid(Grunt))
                return new NomGr(miejsce, ryba);
            if (typeid(metoda) == typeid(Spinning))
                return new NomSp(miejsce);
            if (typeid(metoda) == typeid(Zywiec))
                return new NomZyw(miejsce);
            break;
        }
        case 3: {
            if (typeid(metoda) == typeid(Splawik))
                return new MaxiSpl(miejsce, ryba); // tu przekazujemy rybe oraz miejsce jako decydujace czynniki dla zw. sprzetu
            if (typeid(metoda) == typeid(Grunt))
                return new MaxiGr(miejsce, ryba);
            if (typeid(metoda) == typeid(Spinning))
                return new MaxiSp(miejsce);
            if (typeid(metoda) == typeid(Zywiec))
                return new MaxiZyw(miejsce);
            break;
        }
        case 4: {
            return new BackToMenu();
            break;
        }
        default: {
            return new SprzetPusty();
            break;
        }
    }
}
