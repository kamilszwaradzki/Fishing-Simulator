#include "RybyLosowane.hpp"

void getWylosowanaRyba(const int &ryba, Symulator &symulator) {
        double rybaw = 0.0;
        random_device rd;  // Will be used to obtain a seed for the random number engine
        mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
        uniform_real_distribution<> dis_mini(0.0, 1.0);
        uniform_real_distribution<> dis_nom3(0.0, 3.0);
        uniform_real_distribution<> dis_nom6(0.0, 6.0);
        uniform_real_distribution<> dis_nom15(0.0, 15.0);
        uniform_real_distribution<> dis_maxi2(0.0, 2.0);
        uniform_real_distribution<> dis_maxi5(0.0, 5.0);
        uniform_real_distribution<> dis_maxi10(0.0, 10.0);
        uniform_real_distribution<> dis_maxi30(0.0, 30.0);

        cout << fixed;
        cout << setprecision( 2 );

        if (ryba == 1) {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl)) {
                rybaw = dis_mini(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = dis_nom6(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = dis_maxi10(gen);
            }
            cout << "Zlapales Leszcza " << rybaw << " kilogramowego !!" << endl;
        } else if (ryba == 2) {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl)) {
                rybaw = dis_mini(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = dis_nom6(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = dis_maxi10(gen);
            }
            cout << "Zlapales Lina " << rybaw << " kilogramowego !!" << endl;
        } else if (ryba == 3) {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl)) {
                rybaw = dis_mini(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = dis_nom15(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = dis_maxi30(gen);
            }
            cout << "Zlapales Karpia " << rybaw << " kilogramowego !!" << endl;
        } else if (ryba == 4) {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl)) {
                rybaw = dis_mini(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = dis_nom3(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = dis_maxi5(gen);
            }
            cout << "Zlapales Okonia " << rybaw << " kilogramowego !!" << endl;
        } else if (ryba == 5) {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) || typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl) || typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = dis_mini(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = dis_maxi2(gen);
            }
            cout << "Zlapales Plotke " << rybaw << " kilogramowa !!" << endl;
        } else if (ryba == 6) {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) || typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl) || typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = dis_mini(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = dis_maxi2(gen);
            }
            cout << "Zlapales Sielawe " << rybaw << " kilogramowa !!" << endl;
        } else if (ryba == 7) {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl)) {
                rybaw = dis_mini(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = dis_nom6(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = dis_maxi10(gen);
            }
            cout << "Zlapales Sieje " << rybaw << " kilogramowa !!" << endl;
        } else if (ryba == 8) {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl)) {
                rybaw = dis_mini(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = dis_nom6(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = dis_maxi10(gen);
            }
            cout << "Zlapales Mietusa " << rybaw << " kilogramowego !!" << endl;
        } else if (ryba == 9) {
            if (typeid(*symulator.Getsprzet()) == typeid(MiniGr) || typeid(*symulator.Getsprzet()) == typeid(NomGr) ||
                typeid(*symulator.Getsprzet()) == typeid(MiniSpl) || typeid(*symulator.Getsprzet()) == typeid(NomSpl)) {
                rybaw = dis_mini(gen);
            } else if (typeid(*symulator.Getsprzet()) == typeid(MaxiGr) ||
                        typeid(*symulator.Getsprzet()) == typeid(MaxiSpl)) {
                rybaw = dis_maxi2(gen);
            }
            cout << "Zlapales Wzdrege " << rybaw << " kilogramowa !!" << endl;
        } else if (ryba >= 10) {
            cout << "Niestety nic nie zlapales :(" << endl;
        }
}
