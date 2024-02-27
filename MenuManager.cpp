#include "MenuManager.hpp"

MenuManager::MenuManager(Symulator &symulator, int &wybor, array<int, 7> &choices)
{
    //ctor
    bool isExit = false;
    int zaneta, grunt, pogoda, ryba,
        // zmienne dla rysunku
        graf = 0, znak = 0, l = 0;
    double wynik;
    random_device rd;  // Will be used to obtain a seed for the random number engine
    mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<int> dist2(1, 2);
    std::uniform_int_distribution<int> dist3(1, 3);
    std::uniform_int_distribution<int> dist4(1, 4);
    std::uniform_int_distribution<int> dist5(1, 5);
    std::uniform_int_distribution<int> dist6(1, 6);
    std::uniform_int_distribution<int> dist8(1, 8);
    std::uniform_int_distribution<int> dist19(1, 19);
    std::uniform_int_distribution<int> dist39(1, 39);
    VoidFunctionWithoutParameter arr_rys[] = {
        rys,
        rys1,
        rys2,
        rys3,
        rys4,
        rys5,
        rys6,
        rys7
    };
    // koniec zmiennych dla rysunku
    while (isExit != true) {
        menu1();
        cin >> wybor; // jezioro lub wyrabianie zanety cokolwiek co sie zamarzy ;p
        switch(wybor) {
            // Jeziora
            case 1:
            case 2:
            case 3:
            case 4:
            {

                    symulator.Setjezioro(*getJezioro(wybor));
                    symulator.Getjezioro()->load();
                    if (typeid(*symulator.Getjezioro()) == typeid(JezioroPuste) ||
                        typeid(*symulator.Getjezioro()) == typeid(BackToMenu))
                        continue;
                    choices[0] = wybor;
                    cin >> wybor; // miejsce: Brzeg, Pomost, Lodz, Lod lub powrot ;p
                    symulator.Setmiejsce(*getMiejsce(*symulator.Getjezioro(), wybor));
                    symulator.Getmiejsce()->load();
                    if (typeid(*symulator.Getmiejsce()) == typeid(MiejscePuste) ||
                        typeid(*symulator.Getmiejsce()) == typeid(BackToMenu))
                        continue;
                    choices[1] = wybor;
                    cin >> wybor; // Ryba: Leszcz, Lin, Karp, Okon itd. lub powrot ;p
                    symulator.Setryba(*getRyba(*symulator.Getmiejsce(), wybor));
                    symulator.Getryba()->load();
                    if (typeid(*symulator.Getryba()) == typeid(RybaPusta) ||
                        typeid(*symulator.Getryba()) == typeid(BackToMenu))
                        continue;
                    choices[2] = wybor;
                    cin >> wybor; // Metoda: Grunt, Splawik, Zywiec, Spinning lub powrot ;p
                    symulator.Setmetoda(*getMetoda(*symulator.Getryba(), wybor));
                    symulator.Getmetoda()->load();
                    if (typeid(*symulator.Getmetoda()) == typeid(MetodaPusta) ||
                        typeid(*symulator.Getmetoda()) == typeid(BackToMenu))
                        continue;
                    choices[3] = wybor;
                    cin >> wybor; // Sprzet: Minimalny, Nominalny, Maksymalny
                    symulator.Setsprzet(*getSprzet(*symulator.Getmiejsce(), *symulator.Getryba(), *symulator.Getmetoda(), wybor));
                    symulator.Getsprzet()->load();
                    if (typeid(*symulator.Getsprzet()) == typeid(SprzetPusty) ||
                        typeid(*symulator.Getsprzet()) == typeid(BackToMenu))
                        continue;
                    choices[4] = wybor;
                    zapisz(choices);
                    break;
            }
            case 5: // Obliczanie zanety dla ryb bialych
            case 6: // Obliczenie zanety dla ryb drapieznych
            {
                system("cls");
                if (wybor == 5) {
                    wybor2();
                } else {
                    wybor3();
                }
                cin >> zaneta;
                symulator.Setzaneta(*getZaneta(wybor, zaneta));
                symulator.Getzaneta()->load();
                if (typeid(*symulator.Getzaneta()) == typeid(ZanetaPusta) ||
                    typeid(*symulator.Getzaneta()) == typeid(BackToMenu))
                    continue;
                choices[5] = wybor;
                choices[6] = zaneta;
                zapisz(choices);
                system("cls");
                symulator.Getzaneta()->load();
                cout << "Ile chcesz uzyc zanety(w gramach)? : ";
                cin >> zaneta;
                wynik = zaneta * symulator.Getzaneta()->GetdbMultiplier();
                cout << "Musisz dac " << wynik << " gram" << endl;
                infoAboutProgramSuspend("aby wrocic do menu...");
            }
            break;
            case 7: // idz na ryby
            /*
                jest to losowy generator prawdopodobienstwa jak duza rybe zlapiemy na grunt na zasadzie jak dobrze trafimy w miejsce
                lub jak dobrze dopasujemy zanete na dana rybe czy nie przesadzimy z iloscia zanety itd. (cokolwiek, naprawde mozna to roznie interpretowac)
            */
            {
                grunt = dist3(gen); // zakres losowania od 1 do 3
                cout << "grunt= " << grunt << endl;
                if (grunt == 1) {
                    grunt = 10;
                    cout << "grunt rowna sie " << grunt << "%" << endl;
                } else if (grunt == 2) {
                    grunt = 20;
                    cout << "grunt rowna sie " << grunt << "%" << endl;
                } else if (grunt == 3) {
                    grunt = 30;
                    cout << "grunt rowna sie " << grunt << "%" << endl;
                }

                cin.sync();
                cin.get();
                break;
            }
            case 8: // Lowienie ryb(wersja beta)
            {
                // wczytaj();
                if (typeid(*symulator.Getmetoda()) == typeid(MetodaPusta)) {
                    continue;
                } else if (typeid(*symulator.Getmetoda()) == typeid(Grunt)) {
                    pogoda = dist2(gen);
                    switch(pogoda) {
                        case 1: // pogoda sloneczna
                        case 2: // pogoda pochmurna
                        {
                            system("cls");
                            if (pogoda == 1) {
                                cout << "Slonecznie,woda jest ciepla." << endl
                                     << "Nic tylko sie opalac :D" << endl
                                     << "..." << endl
                                     << "Albo isc na rybki :D" << endl;
                            } else {
                                cout << "Pochmurno,woda niezbyt ciepla :(" << endl;
                            }
                            cin.sync();
                            cin.get();
                            system("cls");
                            ryba = (pogoda == 1) ? dist19(gen) : dist39(gen); // zakres losowania od 1 do 30
                            getWylosowanaRyba(ryba, symulator);
                            break;
                        }
                    }
                } else if(typeid(*symulator.Getmetoda()) == typeid(Splawik)) {
                    pogoda = dist2(gen);
                    switch(pogoda) {
                        case 1: // pogoda sloneczna
                        case 2: // pogoda pochmurna
                        {
                            system("cls");
                            if (pogoda == 1) {
                                cout << "Slonecznie,woda jest ciepla." << endl
                                     << "Nic tylko sie opalac :D" << endl
                                     << "..." << endl
                                     << "Albo isc na rybki :D" << endl;
                            } else {
                                cout << "Pochmurno,woda niezbyt ciepla :(" << endl;
                            }
                            cin.sync();
                            cin.get();
                            system("cls");
                            while (znak != 32)
                            {
                                graf = dist8(gen);
                                switch (graf)
                                {
                                    case 1:
                                    case 2:
                                    case 3:
                                    case 4:
                                    case 5:
                                    case 6:
                                    case 7:
                                    case 8:
                                    {
                                        arr_rys[graf - 1]();
                                        Sleep(1000);
                                        if (_kbhit() > 0)
                                        {
                                            l = graf > 3 ? (graf > 4 ? (graf > 5 ? (graf > 6 ? dist2(gen) : dist3(gen) ) : dist4(gen) ) : dist5(gen) ) : (dist6(gen));
                                            if (l == 1) {
                                                ryba = (pogoda == 1) ? dist19(gen) : dist39(gen); // zakres losowania od 1 do 30
                                                getWylosowanaRyba(ryba, symulator);
                                            } else if (l >= 2) {
                                                cout << "Przykro mi niestety ale nic nie ma na haczyku :(" << endl;
                                            }
                                            znak = _getch();
                                            infoAboutProgramSuspend("aby wrocic do menu...");
                                        }
                                        break;
                                    }
                                    default:
                                        break;
                                }
                            }
                            if (znak == 32) {
                                cout << "Nacisnales Spacje. Koniec petli." << endl;
                            }
                            znak = 0;
                            break;
                        }
                    }
                }
                break;
            }
            case 9: // czyszczenie wyboru
            {
                czyszczenie(); // Funkcja oczyszcza plik dane.txt
                cout << "Wyczyszczono pomyslnie!" << endl;
                cin.sync();
                cin.get();
                break;
            }
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
