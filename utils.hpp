#pragma once
#ifndef LIBS_IMP
    #define LIBS_IMP
    #pragma once
    #include <iostream>
    #include <windows.h>
    using namespace std;
#endif

#ifndef LIBS_STREAM
    #define LIBS_STREAM
    #pragma once
    #include <fstream> //odczyt/zapis
#endif

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
