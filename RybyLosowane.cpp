#include "RybyLosowane.hpp"

void getWylosowanaRyba(const int &ryba, Symulator &symulator) {
        double rybaw = 0.0;
        if (ryba == 1)
        {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl)) {
                rybaw = rand() % 1 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = rand() % 6 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = rand() % 10 + 0.1;
            }
            cout << "Zlapales Leszcza " << rybaw << " kilogramowego !!" << endl;
        }
        else if (ryba == 2)
        {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl)) {
                rybaw = rand() % 1 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = rand() % 6 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = rand() % 10 + 0.1;
            }
            cout << "Zlapales Lina " << rybaw << " kilogramowego !!" << endl;
        }
        else if (ryba == 3)
        {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl)) {
                rybaw = rand() % 1 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = rand() % 15 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = rand() % 30 + 0.1;
            }
            cout << "Zlapales Karpia " << rybaw << " kilogramowego !!" << endl;
        }
        else if (ryba == 4)
        {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl)) {
                rybaw = rand() % 1 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = rand() % 3 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = rand() % 5 + 0.1;
            }
            cout << "Zlapales Okonia " << rybaw << " kilogramowego !!" << endl;
        }
        else if (ryba == 5)
        {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) || typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl) || typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = rand() % 1 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = rand() % 2 + 0.1;
            }
            cout << "Zlapales Plotke " << rybaw << " kilogramowa !!" << endl;
        }
        else if (ryba == 6)
        {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) || typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl) || typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = rand() % 1 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = rand() % 2 + 0.1;
            }
            cout << "Zlapales Sielawe " << rybaw << " kilogramowa !!" << endl;
        }
        else if (ryba == 7)
        {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl)) {
                rybaw = rand() % 1 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = rand() % 6 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = rand() % 10 + 0.1;
            }
            cout << "Zlapales Sieje " << rybaw << " kilogramowa !!" << endl;
        }
        else if (ryba == 8)
        {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl)) {
                rybaw = rand() % 1 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = rand() % 6 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = rand() % 10 + 0.1;
            }
            cout << "Zlapales Mietusa " << rybaw << " kilogramowego !!" << endl;
        }
        else if (ryba == 9)
        {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) || typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl) || typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = rand() % 1 + 0.1;
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = rand() % 2 + 0.1;
            }
            cout << "Zlapales Wzdrege " << rybaw << " kilogramowa !!" << endl;
        }
        else if (ryba >= 10)
        {
            cout << "Niestety nic nie zlapales :(" << endl;
        }
}
