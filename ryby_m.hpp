#pragma once
#include "autoloaderstdfunc.hpp"


// ryby normalne
void ryba1();

// ryby pod lód
void ryba2();

/*
    Nazwa ryby,
    trzy wymiary(min, nom, maks),
    wymiary ochronne,
    waga(min,nom,maks),
    metoda połowu(grunt, spławik, spinning) oraz powrót do menu
*/
void wyborles();
void wyborlin();
void wyborkarp();
void wyborokon();
void wyborploc();
void wyborsielawa();
void wyborsieja();
void wyborszczupak();
void wybormietus();
void wyborwzdrega();

// funkcja dla nieprawidlowego wyboru ryby
void wyborRybaPusta();
