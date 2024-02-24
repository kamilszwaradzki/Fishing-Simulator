#include "Ryby.hpp"

Ryba* getRyba(Miejsce &miejsce, int &wybor) {
    if (typeid(miejsce) == typeid(Brzeg) || typeid(miejsce) == typeid(Pomost) || typeid(miejsce) == typeid(Lodz)) {
            switch(wybor) {
                case 1: {
                    return new Leszcz();
                    break;
                }
                case 2: {
                    return new Lin();
                    break;
                }
                case 3: {
                    return new Karp();
                    break;
                }
                case 4: {
                    return new Okon();
                    break;
                }
                case 5: {
                    return new Ploc();
                    break;
                }
                case 6: {
                    return new Sielawa();
                    break;
                }
                case 7: {
                    return new Sieja();
                    break;
                }
                case 8: {
                    return new Szczupak();
                    break;
                }
                case 9: {
                    return new Mietus();
                    break;
                }
                case 10: {
                    return new Wzdrega();
                    break;
                }
                case 11: {
                    return new BackToMenu();
                    break;
                }
                default: {
                    return new RybaPusta();
                    break;
                }
            }
    }/*
    if (className == "Lod") {
        std::array<std::unique_ptr<Ryba>, 8> ryby = {
            std::make_unique<Leszcz>(),
            std::make_unique<Okon>(),
            std::make_unique<Ploc>(),
            std::make_unique<Sielawa>(),
            std::make_unique<Sieja>(),
            std::make_unique<Szczupak>(),
            std::make_unique<Mietus>(),
            std::make_unique<Wzdrega>(),
        };
        return *ryby[wybor];
    }*/
}
