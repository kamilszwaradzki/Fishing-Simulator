#include "Sprzety.hpp"

// Sprzet jest zalezny od miejsca, potem ryby, a na koncu metody
Sprzet* getSprzet(Miejsce &miejsce, Ryba &ryba, Metoda &metoda, int &wybor) {
    switch(wybor) {
        case 1: {
            if (typeid(metoda) == typeid(Splawik))
                return new MiniSpl(miejsce, ryba); // tu przekazujemy rybe oraz miejsce jako decydujace czynniki dla zw. sprzetu
            if (typeid(metoda) == typeid(Grunt))
                return new MiniGr(/*miejsce, ryba*/);
            if (typeid(metoda) == typeid(Spinning))
                return new MiniSp(/*miejsce, ryba*/);
            if (typeid(metoda) == typeid(Zywiec))
                return new MiniZyw(/*miejsce, ryba*/);
            break;
        }
        case 2: {
            if (typeid(metoda) == typeid(Splawik))
                return new NomSpl(miejsce, ryba); // tu przekazujemy rybe oraz miejsce jako decydujace czynniki dla zw. sprzetu
            if (typeid(metoda) == typeid(Grunt))
                return new NomGr(/*miejsce, ryba*/);
            if (typeid(metoda) == typeid(Spinning))
                return new NomSp(/*miejsce, ryba*/);
            if (typeid(metoda) == typeid(Zywiec))
                return new NomZyw(/*miejsce, ryba*/);
            break;
        }
        case 3: {
            if (typeid(metoda) == typeid(Splawik))
                return new MaxiSpl(miejsce, ryba); // tu przekazujemy rybe oraz miejsce jako decydujace czynniki dla zw. sprzetu
            if (typeid(metoda) == typeid(Grunt))
                return new MaxiGr(/*miejsce, ryba*/);
            if (typeid(metoda) == typeid(Spinning))
                return new MaxiSp(/*miejsce, ryba*/);
            if (typeid(metoda) == typeid(Zywiec))
                return new MaxiZyw(/*miejsce, ryba*/);
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
    return new SprzetPusty();
}
