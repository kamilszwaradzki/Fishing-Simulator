#include "Symulator.hpp"
#include "Jeziora.hpp"
#include "Miejsca.hpp"
#include "Ryby.hpp"
#include "Metody.hpp"
#include "Sprzety.hpp"
#include "MenuManager.hpp"

int main() {
    int choice/*, ryba, metoda, sprzet*/;
    array<int, 7> choices;
    choices.fill({0});
    Symulator symulator;
    wczytaj(choices);
    symulator.Setjezioro(*getJezioro(choices[0]));
    symulator.Setmiejsce(*getMiejsce(*symulator.Getjezioro(), choices[1]));
    symulator.Setryba(*getRyba(*symulator.Getmiejsce(), choices[2]));
    symulator.Setmetoda(*getMetoda(*symulator.Getryba(), choices[3]));
    symulator.Setsprzet(*getSprzet(*symulator.Getmiejsce(), *symulator.Getryba(), *symulator.Getmetoda(), choices[4]));
    symulator.Setzaneta(*getZaneta(choices[5], choices[6]));
    MenuManager menu(symulator, choice, choices);
    return 0;
}
