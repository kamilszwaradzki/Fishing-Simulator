#include "sprzet_m.hpp"

void wyborsprz()
{
    system("cls");
    cout << "[1]-Minimalny" << endl;
    cout << "[2]-Nominalny" << endl;
    cout << "[3]-Najlepszy" << endl;
    cout << "[4]-Powrot do Menu" << endl;
    cout << "Wybierz Sprzet:";
}
void wyborSprzetPusty()
{
    system("cls");
    cout << "Wybrano bledny sprzet. Wracam do menu..." << endl;
}
