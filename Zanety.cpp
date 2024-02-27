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
        }
        case 2:
        {
            if (wybor == 5) {
                return new Arachid();
            } else {
                return new MaczkaMiesna();
            }
        }
        case 3:
        {
            if (wybor == 5) {
                return new Sruta();
            } else {
                return new MaczkaKostna();
            }
        }
        case 4:
        {
            if (wybor == 5) {
                return new Zyto();
            } else {
                return new BackToMenu();
            }
        }
        case 5:
        {
            if (wybor == 5) {
                return new Pszenica();
            } else {
                return new ZanetaPusta();
            }
        }
        case 6:
        {
            if (wybor == 5) {
                return new KopraMelasowana();
            } else {
                return new ZanetaPusta();
            }
        }
        case 7:
        {
            if (wybor == 5) {
                return new Rzepak();
            } else {
                return new ZanetaPusta();
            }
        }
        case 8:
        {
            if (wybor == 5) {
                return new Koper();
            } else {
                return new ZanetaPusta();
            }
        }
        case 9:
        {
            if (wybor == 5) {
                return new PinkaOchotka();
            } else {
                return new ZanetaPusta();
            }
        }
        case 10:
        {
            if (wybor == 5) {
                return new BackToMenu();
            } else {
                return new ZanetaPusta();
            }
        }
        default:
        {
            return new ZanetaPusta();
        }
    }
}
