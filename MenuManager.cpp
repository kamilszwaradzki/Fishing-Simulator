#include "MenuManager.hpp"

MenuManager::MenuManager(Symulator &symulator, int &wybor)
{
    //ctor
    // Kod testowy dla wyboru menu
    bool isExit = false;
    while (isExit != true) {
        menu1();
        cin >> wybor; // jezioro lub wyrabianie zanety cokolwiek co sie zamarzy ;p
        switch(wybor) {
            // Jeziora
            case 1:
            case 2:
            case 3:
            case 4:
                    symulator.Setjezioro(*getJezioro(wybor));
                    symulator.Getjezioro()->load();
                    if (typeid(*symulator.Getjezioro()) == typeid(JezioroPuste) ||
                        typeid(*symulator.Getjezioro()) == typeid(BackToMenu))
                        continue;
                    cin >> wybor; // miejsce: Brzeg, Pomost, Lodz, Lod lub powrot ;p
                    symulator.Setmiejsce(*getMiejsce(*symulator.Getjezioro(), wybor));
                    symulator.Getmiejsce()->load();
                    if (typeid(*symulator.Getmiejsce()) == typeid(MiejscePuste) ||
                        typeid(*symulator.Getmiejsce()) == typeid(BackToMenu))
                        continue;
                    cin >> wybor; // Ryba: Leszcz, Lin, Karp, Okon itd. lub powrot ;p
                    symulator.Setryba(*getRyba(*symulator.Getmiejsce(), wybor));
                    symulator.Getryba()->load();
                    if (typeid(*symulator.Getryba()) == typeid(RybaPusta) ||
                        typeid(*symulator.Getryba()) == typeid(BackToMenu))
                        continue;
                    cin >> wybor; // Metoda: Grunt, Splawik, Zywiec, Spinning lub powrot ;p
                    symulator.Setmetoda(*getMetoda(*symulator.Getryba(), wybor));
                    symulator.Getmetoda()->load();
                    if (typeid(*symulator.Getmetoda()) == typeid(MetodaPusta) ||
                        typeid(*symulator.Getmetoda()) == typeid(BackToMenu))
                        continue;
                    cin >> wybor; // Sprzet: Minimalny, Nominalny, Maksymalny
                    symulator.Setsprzet(*getSprzet(*symulator.Getmiejsce(), *symulator.Getryba(), *symulator.Getmetoda(), wybor));
                    symulator.Getsprzet()->load();
                    if (typeid(*symulator.Getsprzet()) == typeid(SprzetPusty) ||
                        typeid(*symulator.Getsprzet()) == typeid(BackToMenu))
                        continue;
                    break;
            /*
                Obliczanie zanety:
                [5]-Na ryby biale
                [6]-Na ryby drapiezne

                [7]-Idz na ryby
                [8]-Lowienie ryb(wersja beta)
                [9]-Czyszczenie wyboru

                [10]-Wyjscie
            */
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                isExit = true;
                break;
            default:
                system("cls");
                cout << "Bledna opcja." << endl;
                break;
        }
    }
}

MenuManager::~MenuManager()
{
    //dtor
}
