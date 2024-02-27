#include "Zanety.hpp"

Zaneta* getZaneta(const int &wybor, const int &zaneta) {
    switch(zaneta) {
        case 1:
        {
            if (wybor == 5) {
                return new Otreby();
            } else {
                return new Krew();
            }
            break;
        }
        case 2:
        {
            if (wybor == 5) {
                return new Arachid();
            } else {
                return new MaczkaMiesna();
            }
            break;
        }
        case 3:
        {
            if (wybor == 5) {
                return new Sruta();
            } else {
                return new MaczkaKostna();
            }
            break;
        }
        case 4:
        {
            if (wybor == 5) {
                return new Zyto();
            } else {
                return new BackToMenu();
            }
            break;
        }
        case 5:
        {
            if (wybor == 5) {
                return new Pszenica();
            } else {
                return new ZanetaPusta();
            }
            break;
        }
        case 6:
        {
            if (wybor == 5) {
                return new KopraMelasowana();
            } else {
                return new ZanetaPusta();
            }
            break;
        }
        case 7:
        {
            if (wybor == 5) {
                return new Rzepak();
            } else {
                return new ZanetaPusta();
            }
            break;
        }
        case 8:
        {
            if (wybor == 5) {
                return new Koper();
            } else {
                return new ZanetaPusta();
            }
            break;
        }
        case 9:
        {
            if (wybor == 5) {
                return new PinkaOchotka();
            } else {
                return new ZanetaPusta();
            }
            break;
        }
        case 10:
        {
            if (wybor == 5) {
                return new BackToMenu();
            } else {
                return new ZanetaPusta();
            }
            break;
        }
        default:
        {
            return new ZanetaPusta();
            break;
        }
    }
}
