#include "MenuManager.hpp"

MenuManager::MenuManager(Symulator &symulator, int &wybor)
{
    //ctor
    bool isExit = false;
    /* \/ zmienne dla case'ow 5 - 7, do usuniecia po refactoringu \/ */
    int zaneta, grunt;
    double wynik;
    /* /\ zmienne do usuniecia po refactoringu /\ */
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
            case 5: ///Obliczanie zanety dla ryb bialych
            {
                system("cls");
                wybor2();
                cin >> zaneta;
                symulator.Setzaneta(*getZaneta(wybor, zaneta));
                symulator.Getzaneta()->load();
                if (typeid(*symulator.Getzaneta()) == typeid(ZanetaPusta) ||
                    typeid(*symulator.Getzaneta()) == typeid(BackToMenu))
                    continue;
                system("cls");
                symulator.Getzaneta()->load();
                cout << "Ile chcesz uzyc zanety(w gramach)? : ";
                cin >> zaneta;
                wynik = zaneta * symulator.Getzaneta()->GetdbMultiplier();
                cout << "Musisz dac " << wynik << " gram" << endl;
                cout << "" << endl;
                cout << "Nacisnij Enter, aby wrocic do menu...";
                cin.sync();cin.get();
            }
            break;
            case 6: ///Obliczenie zanety dla ryb drapieznych
            {
                system("cls");
                wybor3();
                cin >> zaneta;
                symulator.Setzaneta(*getZaneta(wybor, zaneta));
                symulator.Getzaneta()->load();
                if (typeid(*symulator.Getzaneta()) == typeid(ZanetaPusta) ||
                    typeid(*symulator.Getzaneta()) == typeid(BackToMenu))
                    continue;
                system("cls");
                symulator.Getzaneta()->load();
                cout << "Ile chcesz uzyc zanety(w gramach)? : ";
                cin >> zaneta;
                wynik = zaneta * symulator.Getzaneta()->GetdbMultiplier();
                cout << "Musisz dac " << wynik << " gram" << endl;
                cout << "" << endl;
                cout << "Nacisnij Enter, aby wrocic do menu...";
                cin.sync();cin.get();
            }
            break;
            case 7: // idz na ryby
            /*
                jest to losowy generator prawdopodobienstwa jak duza rybe zlapiemy na grunt na zasadzie jak dobrze trafimy w miejsce
                lub jak dobrze dopasujemy zanete na dana rybe czy nie przesadzimy z iloscia zanety itd. (cokolwiek, naprawde mozna to roznie interpretowac)
            */
            {
                grunt = rand() % 3 + 1; // zakres losowania od 1 do 3
                cout << "grunt= " << grunt << endl;
                if (grunt == 1)
                {
                    grunt = 10;
                    cout << "grunt rowna sie " << grunt << "%" << endl;
                }
                else if (grunt == 2)
                {
                    grunt = 20;
                    cout << "grunt rowna sie " << grunt << "%" << endl;
                }
                else if (grunt == 3)
                {
                    grunt = 30;
                    cout << "grunt rowna sie " << grunt << "%" << endl;
                }

                cin.sync();
                cin.get();
                break;
            }
            case 8: // Lowienie ryb(wersja beta)
                /*wczytaj();
                if (ryba == 1 && grunt) /// warunek dla gruntu random <-czyli Random, warunek ryba = 1 czyli Leszcz :)
                {
                    pogoda = rand() % 2 + 1;
                    if (pogoda == 1)
                    {
                        system("cls");
                        cout << "Pochmurno,woda niezbyt ciepla :(" << endl;
                        cin.sync();
                        cin.get();
                        system("cls");
                        ryba = rand() % 39 + 1; // zakres losowania od 1 do 30
                        if (ryba >= 1 && ryba <= 2)
                        {
                            if (grunt == 1)
                            {
                                rybaw = rand() % 3 + 0.1;
                                cout << "Zlapales Leszcza " << rybaw << " kilogramowego !!" << endl;
                            }
                            else if (grunt == 2)
                            {
                                rybaw = rand() % 6 + 0.1;
                                cout << "Zlapales Leszcza " << rybaw << " kilogramowego !!" << endl;
                            }
                            else if (grunt == 3)
                            {
                                rybaw = rand() % 10 + 0.1;
                                cout << "Zlapales Leszcza " << rybaw << " kilogramowego !!" << endl;
                            }
                        }
                        else if (ryba == 3)
                        {
                            rybaw = rand() % 10 + 0.1;
                            cout << "Zlapales Lina " << rybaw << " kilogramowego !!" << endl;
                        }
                        else if (ryba == 4)
                        {
                            rybaw = rand() % 30 + 0.1;
                            cout << "Zlapales Karpia " << rybaw << " kilogramowego !!" << endl;
                        }
                        else if (ryba == 5)
                        {
                            rybaw = rand() % 5 + 0.1;
                            cout << "Zlapales Okonia " << rybaw << " kilogramowego !!" << endl;
                        }
                        else if (ryba == 6)
                        {
                            rybaw = rand() % 2 + 0.1;
                            cout << "Zlapales Plotke " << rybaw << " kilogramowa !!" << endl;
                        }
                        else if (ryba == 7)
                        {
                            rybaw = rand() % 2 + 0.1;
                            cout << "Zlapales Sielawe " << rybaw << " kilogramowa !!" << endl;
                        }
                        else if (ryba == 8)
                        {
                            rybaw = rand() % 10 + 0.1;
                            cout << "Zlapales Sieje " << rybaw << " kilogramowa !!" << endl;
                        }
                        else if (ryba == 9)
                        {
                            rybaw = rand() % 10 + 0.1;
                            cout << "Zlapales Mietusa " << rybaw << " kilogramowego !!" << endl;
                        }
                        else if (ryba == 10)
                        {
                            rybaw = rand() % 2 + 0.1;
                            cout << "Zlapales Wzdrege " << rybaw << " kilogramowa !!" << endl;
                        }
                        else if (ryba >= 11)
                        {
                            cout << "Niestety nic nie zlapales :(" << endl;
                        }
                        cin.sync();
                        cin.get();
                    }
                    else if (pogoda == 2)
                    {
                        system("cls");
                        cout << "Slonecznie,woda jest ciepla." << endl;
                        cout << "Nic tylko sie opalac :D" << endl;
                        cout << "..." << endl;
                        cout << "Albo isc na rybki :D" << endl;
                        cin.sync();
                        cin.get();
                        system("cls");
                        ryba = rand() % 19 + 1; // zakres losowania od 1 do 30
                        if (ryba == 1)
                        {
                            if (grunt == 1)
                            {
                                rybaw = rand() % 3 + 0.1;
                                cout << "Zlapales Leszcza " << rybaw << " kilogramowego !!" << endl;
                            }
                            else if (grunt == 2)
                            {
                                rybaw = rand() % 6 + 0.1;
                                cout << "Zlapales Leszcza " << rybaw << " kilogramowego !!" << endl;
                            }
                            else if (grunt == 3)
                            {
                                rybaw = rand() % 10 + 0.1;
                                cout << "Zlapales Leszcza " << rybaw << " kilogramowego !!" << endl;
                            }
                        }
                        else if (ryba == 2)
                        {
                            rybaw = rand() % 10 + 0.1;
                            cout << "Zlapales Lina " << rybaw << " kilogramowego !!" << endl;
                        }
                        else if (ryba == 3)
                        {
                            rybaw = rand() % 30 + 0.1;
                            cout << "Zlapales Karpia " << rybaw << " kilogramowego !!" << endl;
                        }
                        else if (ryba == 4)
                        {
                            rybaw = rand() % 5 + 0.1;
                            cout << "Zlapales Okonia " << rybaw << " kilogramowego !!" << endl;
                        }
                        else if (ryba == 5)
                        {
                            rybaw = rand() % 2 + 0.1;
                            cout << "Zlapales Plotke " << rybaw << " kilogramowa !!" << endl;
                        }
                        else if (ryba == 6)
                        {
                            rybaw = rand() % 2 + 0.1;
                            cout << "Zlapales Sielawe " << rybaw << " kilogramowa !!" << endl;
                        }
                        else if (ryba == 7)
                        {
                            rybaw = rand() % 10 + 0.1;
                            cout << "Zlapales Sieje " << rybaw << " kilogramowa !!" << endl;
                        }
                        else if (ryba == 8)
                        {
                            rybaw = rand() % 10 + 0.1;
                            cout << "Zlapales Mietusa " << rybaw << " kilogramowego !!" << endl;
                        }
                        else if (ryba == 9)
                        {
                            rybaw = rand() % 2 + 0.1;
                            cout << "Zlapales Wzdrege " << rybaw << " kilogramowa !!" << endl;
                        }
                        else if (ryba >= 10)
                        {
                            cout << "Niestety nic nie zlapales :(" << endl;
                        }
                        cin.sync();
                        cin.get();
                    }
                }*/
                break;
            case 9: // czyszczenie wyboru
                czyszczenie(); // Funkcja oczyszcza plik dane.txt
                cout << "Wyczyszczono pomyslnie!" << endl;
                cin.sync();
                cin.get();
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
