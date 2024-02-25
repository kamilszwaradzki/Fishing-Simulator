#include "Jeziora.hpp"

Jezioro* getJezioro(int &jezioro) {
    switch(jezioro) {
        case 1:
        {
            return new Lanskie();
            break;
        }
        case 2:
        {
            return new Sek();
            break;
        }
        // case 3: Zalesie
        // case 4: Gim
        default:
        {
            return new JezioroPuste();
            break;
        }
    }
}
