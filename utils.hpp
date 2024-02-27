#pragma once
#include "autoloaderstdfunc.hpp"

typedef void (*VoidFunctionWithoutParameter)(); // type for array of void functions without parameter

// Funkcja do czyszczenia wyboru
void czyszczenie();
// Funkcja do Zapisu danych do Pliku
void zapisz(const array<int, 7> &wybory);
// funkcja do wczytywania danych z pliku tekstowego.
void wczytaj(array<int, 7> &wybory);
// menu poczatkowe
void menuDisplaySlowly();
// menu poczatkujacego wedkarza
void menu1();

// placeholder dla klasy ryba
void placeholder();

// komunikat powrotu do menu
void backToMenuFunction();

void infoAboutProgramSuspend(const string &info);
