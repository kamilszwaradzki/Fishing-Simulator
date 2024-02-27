#pragma once
#include "autoloaderstdfunc.hpp"

typedef void (*VoidFunctionWithoutParameter)(); // type for array of void functions without parameter

// Funkcja do czyszczenia wyboru
void czyszczenie();
// Funkcja do Zapisu danych do Pliku
void zapis();
// funkcja do wczytywania danych z pliku tekstowego.
void wczytaj();
// menu poczatkowe
void menu();
// menu poczatkujacego wedkarza
void menu1();

// placeholder dla klasy ryba
void placeholder();

// komunikat powrotu do menu
void backToMenuFunction();

void infoAboutSuspendProgram(const string &info);
