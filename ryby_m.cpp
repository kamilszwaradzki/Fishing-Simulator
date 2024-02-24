#include "ryby_m.hpp"

void ryba1() // ryby normalne
{
    system("cls");
    cout << "[1]-Leszcz" << endl;
    cout << "[2]-Lin" << endl;
    cout << "[3]-Karp" << endl;
    cout << "[4]-Okon" << endl;
    cout << "[5]-Ploc" << endl;
    cout << "[6]-Sielawa" << endl;
    cout << "[7]-Sieja" << endl;
    cout << "[8]-Szczupak" << endl;
    cout << "[9]-Mietus" << endl;
    cout << "[10]-Wzdrega" << endl;
    cout << "[11]-Powrot do menu" << endl;
    cout << "" << endl;
    cout << "Wybierz Rybe:";
}
void ryba2() // Ryby do zlapania pod Lod
{
    system("cls");
    cout << "[1]-Leszcz" << endl;
    cout << "[2]-Okon" << endl;
    cout << "[3]-Ploc" << endl;
    cout << "[4]-Sielawa" << endl;
    cout << "[5]-Sieja" << endl; /// na pewno pod lód :)
    cout << "[6]-Szczupak" << endl;
    cout << "[7]-Mietus" << endl;
    cout << "[8]-Wzdrega" << endl;
    cout << "[9]-Powrot do menu" << endl;
    cout << "" << endl;
    cout << "Wybierz Rybe:";
}

void wyborles()
{
    system("cls");
    cout << "Wybrales Leszcza" << endl;
    cout << "Wymiary: minimalne - 30 cm Nominalne - 30-50 cm Maksymalne - 75 cm " << endl;
    cout << "Waga: minimalna - 0,6 kg Nominalna - 0,6-4 kg Maksymalna - 7 kg" << endl;
    cout << " " << endl;
    cout << "[1]-Grunt" << endl;
    cout << "[2]-Splawik" << endl;
    cout << "[3]-Powrot do menu" << endl;
    cout << "Wybierz Metode:";
}
void wyborlin()
{
    system("cls");
    cout << "Wybrales Lina" << endl;
    cout << "Wymiary: minimalne - 20 cm Nominalne - 20-30 cm Maksymalne - 60 cm " << endl;
    cout << "Wymiary ochronne - do 25 cm" << endl;
    cout << "Waga: minimalna - 0,6 kg Nominalna - 0,6-4 kg Maksymalna - 7,7 kg" << endl;
    cout << " " << endl;
    cout << "[1]-Grunt" << endl;
    cout << "[2]-Splawik" << endl;
    cout << "[3]-Powrot do menu" << endl;
    cout << "Wybierz Metode:";
}
void wyborkarp()
{
    system("cls");
    cout << "Wybrales Karpia" << endl;
    cout << "Wymiary: minimalne - 25 cm Nominalne - 25-75 cm Maksymalne - 120 cm " << endl;
    cout << "Waga: minimalna - 1-2 kg Nominalna - 5 kg Maksymalna - 35 kg" << endl;
    cout << "Wymiar Ochronny: do 30 cm (nie dotyczy rzek)" << endl;
    cout << " " << endl;
    cout << "[1]-Grunt" << endl;
    cout << "[2]-Splawik" << endl;
    cout << "[3]-Powrot do menu" << endl;
    cout << "Wybierz Metode:";
}
void wyborokon()
{
    system("cls");
    cout << "Wybrales Okonia" << endl;
    cout << "Wymiary: minimalne - 15 cm Nominalne - 25-30 cm Maksymalne - 50 cm " << endl;
    cout << "Waga: minimalna - 0,5 kg Nominalna - 1-1,5 kg Maksymalna - 2 kg" << endl;
    cout << "Wymiar Ochronny: 18cm" << endl;
    cout << " " << endl;
    cout << "[1]-Spinning" << endl;
    cout << "[2]-Splawik" << endl;
    cout << "[3]-Powrot do menu" << endl;
    cout << "Wybierz Metode:";
}
void wyborploc()
{
    system("cls");
    cout << "Wybrales Ploc" << endl;
    cout << "Wymiary: minimalne - 15 cm Nominalne - 25-30 cm Maksymalne - 50 cm " << endl;
    cout << "Waga: minimalna - 0,5 kg Nominalna - 1-1,5 kg Maksymalna - 2 kg" << endl;
    cout << " " << endl;
    cout << "[1]-Grunt" << endl;
    cout << "[2]-Splawik" << endl;
    cout << "[3]-Powrot do menu" << endl;
    cout << "Wybierz Metode:";
}
void wyborsielawa()
{
    system("cls");
    cout << "Wybrales Sielawe" << endl;
    cout << "Wymiary: minimalne - 10 cm Nominalne - 15-30 cm Maksymalne - 45 cm " << endl;
    cout << "Waga: minimalna - 0,25 kg Nominalna - 0,5 kg Maksymalna - 1 kg" << endl;
    cout << "Wymiar ochronny: 18 cm" << endl;
    cout << "Okres ochronny: 1.X - 31.XII" << endl;
    cout << " " << endl;
    cout << "[1]-Grunt" << endl;
    cout << "[2]-Splawik" << endl;
    cout << "[3]-Powrot do menu" << endl;
    cout << "Wybierz Metode:";
}
void wyborsieja()
{
    system("cls");
    cout << "Wybrales Sieje" << endl;
    cout << "Wymiary: minimalne - 25 cm Nominalne - 30-50 cm Maksymalne - 60 cm " << endl;
    cout << "Waga: minimalna - 0,5 kg Nominalna - 1,5-2 kg Maksymalna - 2,5 kg" << endl;
    cout << "Wymiar ochronny: 35 cm" << endl;
    cout << "Okres Ochronny: 1.X - 31.XII" << endl;
    cout << " " << endl;
    cout << "[1]-Grunt" << endl;
    cout << "[2]-Splawik" << endl;
    cout << "[3]-Powrot do menu" << endl;
    cout << "Wybierz Metode:";
}
void wyborszczupak()
{
    system("cls");
    cout << "Wybrales Szczupaka" << endl;
    cout << "Wymiary: minimalne - 70 cm Nominalne - 110 cm Maksymalne - 150 cm " << endl;
    cout << "Waga: minimalna - 5 kg Nominalna - 5-10 kg Maksymalna - 12 kg" << endl;
    cout << "Wymiar Ochronny: 50 cm" << endl;
    cout << "Okres Ochronny: 01.I - 30.IV" << endl;
    cout << " " << endl;
    cout << "[1]-Zywiec" << endl;
    cout << "[2]-Spinning" << endl;
    cout << "[3]-Powrot do menu" << endl;
    cout << "Wybierz Metode:";
}
void wybormietus()
{
    system("cls");
    cout << "Wybrales Mietusa" << endl;
    cout << "Wymiary: minimalne - 20 cm Nominalne - 30-60 cm Maksymalne - 120 cm " << endl;
    cout << "Wymiary ochronne - do 25 cm" << endl;
    cout << "Okres ochronny: 1.12 - 29.2" << endl;
    cout << "Waga: minimalna - 5 kg Nominalna - 15-20 kg Maksymalna - 30 kg" << endl;
    cout << " " << endl;
    cout << "[1]-Spinning" << endl;
    cout << "[2]-Splawik" << endl;
    cout << "[3]-Powrot do menu" << endl;
    cout << "Wybierz Metode:";
}
void wyborwzdrega()
{
    system("cls");
    cout << "Wybrales Wzdrege" << endl;
    cout << "Wymiary: minimalne - 10 cm Nominalne - 20-30 cm Maksymalne - 45 cm " << endl;
    cout << "Wymiary ochronne: do 15 cm" << endl;
    cout << "Waga: minimalna - 0,25 kg Nominalna - 0,5-1 kg Maksymalna - 1,7 kg" << endl;
    cout << " " << endl;
    cout << "[1]-Grunt" << endl;
    cout << "[2]-Splawik" << endl;
    cout << "[3]-Spinning" << endl;
    cout << "[4]-Powrot do menu" << endl;
    cout << "Wybierz Metode:";
}

void wyborRybaPusta()
{
    system("cls");
    cout << "Wybrano bledna rybe. Wracam do menu..." << endl;
}
