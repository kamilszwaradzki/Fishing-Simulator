#include "Jeziora.hpp"

Jezioro* getJezioro(const int &jezioro) {
    switch(jezioro) {
        case 1:
        {
            return new Lanskie();
        }
        case 2:
        {
            return new Sek();
        }
        // case 3: Zalesie
        // case 4: Gim
        default:
        {
            return new JezioroPuste();
        }
    }
}
