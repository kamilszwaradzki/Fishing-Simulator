#include "Ryby.hpp"

Ryba* getRyba(Miejsce &miejsce, int &wybor) {
    switch(wybor) {
        case 1: {
            return new Leszcz();
            break;
        }
        case 2: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Okon();
            } else {
                return new Lin();
            }
            break;
        }
        case 3: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Ploc();
            } else {
                return new Karp();
            }
            break;
        }
        case 4: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Sielawa();
            } else {
                return new Okon();
            }
            break;
        }
        case 5: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Sieja();
            } else {
                return new Ploc();
            }
            break;
        }
        case 6: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Szczupak();
            } else {
                return new Sielawa();
            }
            break;
        }
        case 7: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Mietus();
            } else {
                return new Sieja();
            }
            break;
        }
        case 8: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new Wzdrega();
            } else {
                return new Szczupak();
            }
            break;
        }
        case 9: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new BackToMenu();
            } else {
                return new Mietus();
            }
            break;
        }
        case 10: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new RybaPusta();
            } else {
                return new Wzdrega();
            }
            break;
        }
        case 11: {
            if (typeid(miejsce) == typeid(Lod)) {
                return new RybaPusta();
            } else {
                return new BackToMenu();
            }
            break;
        }
        default: {
            return new RybaPusta();
            break;
        }
    }
}
