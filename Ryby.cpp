#include "Ryby.hpp"

Ryba* getRyba(const Miejsce &miejsce, const int &wybor) {
    switch(wybor) {
        case 1: {
            return new Leszcz();
        }
        case 2: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Okon();
            } else {
                return new Lin();
            }
        }
        case 3: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Ploc();
            } else {
                return new Karp();
            }
        }
        case 4: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Sielawa();
            } else {
                return new Okon();
            }
        }
        case 5: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Sieja();
            } else {
                return new Ploc();
            }
        }
        case 6: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Szczupak();
            } else {
                return new Sielawa();
            }
        }
        case 7: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Mietus();
            } else {
                return new Sieja();
            }
        }
        case 8: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Wzdrega();
            } else {
                return new Szczupak();
            }
        }
        case 9: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new BackToMenu();
            } else {
                return new Mietus();
            }
        }
        case 10: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new RybaPusta();
            } else {
                return new Wzdrega();
            }
        }
        case 11: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new RybaPusta();
            } else {
                return new BackToMenu();
            }
        }
        default: {
            return new RybaPusta();
        }
    }
}
