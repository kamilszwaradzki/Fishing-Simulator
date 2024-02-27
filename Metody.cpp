#include "Metody.hpp"

Metoda* getMetoda(const Ryba &ryba, const int &wybor) {
    switch(wybor) {
        case 1: {
            if (typeid(ryba) == typeid(Leszcz) || typeid(ryba) == typeid(Lin) ||
                typeid(ryba) == typeid(Karp) || typeid(ryba) == typeid(Ploc) ||
                typeid(ryba) == typeid(Sielawa) || typeid(ryba) == typeid(Sieja))
                return new Grunt();
            else if (typeid(ryba) == typeid(Okon) || typeid(ryba) == typeid(Mietus))
                return new Spinning();
            else if (typeid(ryba) == typeid(Szczupak))
                return new Zywiec();
            else
                return new BackToMenu();
            break;
        }
        case 2: {
            if (typeid(ryba) == typeid(Leszcz) || typeid(ryba) == typeid(Lin) ||
                typeid(ryba) == typeid(Karp) || typeid(ryba) == typeid(Ploc) ||
                typeid(ryba) == typeid(Sielawa) || typeid(ryba) == typeid(Sieja) ||
                typeid(ryba) == typeid(Okon) || typeid(ryba) == typeid(Mietus) ||
                typeid(ryba) == typeid(Wzdrega))
                return new Splawik();
            else if (typeid(ryba) == typeid(Szczupak))
                return new Spinning();
            else
                return new BackToMenu();
            break;
        }
        case 3: {
            if (typeid(ryba) == typeid(Wzdrega))
                return new Spinning();
            else
                return new BackToMenu();
            break;
        }
        case 4: {
            if (typeid(ryba) == typeid(Wzdrega))
                return new BackToMenu();
            else
                return new MetodaPusta();
            break;
        }
        default: {
            return new MetodaPusta();
            break;
        }
    }
}
