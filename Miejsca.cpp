#include "Miejsca.hpp"

// miejsce: Brzeg, Pomost, Lodz, Lod lub powrot ;p
Miejsce* getMiejsce(const Jezioro &jezioro, const int &wybor) {
    if (typeid(jezioro) == typeid(Sek) || typeid(jezioro) == typeid(Lanskie)) {
        switch(wybor) {
            case 1: {
                return new Brzeg();
                break;
            }
            case 2: {
                return new Pomost();
                break;
            }
            case 3: {
                return new Lodz();
                break;
            }
            case 4: {
                return new Lod();
                break;
            }
            case 5: {
                return new BackToMenu();
                break;
            }
            default: {
                return new MiejscePuste();
                break;
            }
        }
    }
    return new MiejscePuste();
}
