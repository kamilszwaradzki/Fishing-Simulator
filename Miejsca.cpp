#include "Miejsca.hpp"

// miejsce: Brzeg, Pomost, Lodz, Lod lub powrot ;p
Miejsce* getMiejsce(const Jezioro &jezioro, const int &wybor) {
    if (typeid(jezioro) == typeid(Sek) || typeid(jezioro) == typeid(Lanskie)) {
        switch(wybor) {
            case 1: {
                return new Brzeg();
            }
            case 2: {
                return new Pomost();
            }
            case 3: {
                return new Lodz();
            }
            case 4: {
                return new Lod();
            }
            case 5: {
                return new BackToMenu();
            }
            default: {
                return new MiejscePuste();
            }
        }
    }
    return new MiejscePuste();
}
