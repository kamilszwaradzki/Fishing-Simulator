#include "utils.hpp"

typedef void (*VoidFunctionWithoutParameter)(); // type for array of void functions without parameter

void czyszczenie()
{
    ofstream zapis("dane.txt"); /// Funkcja do czyszczenia wyboru
    zapis.flush();
    zapis.close();
}

void zapis(int ryba, int grunt, int splawik) /// Funkcja do Zapisu danych do Pliku
{
    ofstream zapis("dane.txt");
    zapis << ryba << endl; // zapisuje wartosc ktora wybralismy
    if (grunt)
    {

        zapis << grunt << endl; // zapisuje wartosc ktora wybralismy
    }
    else if (splawik)
    {
        zapis << splawik << endl;
    }
    zapis.close(); // zamyka plik
}

void wczytaj(int ryba, int grunt, int splawik) /// funkcja do wczytywania danych z pliku tekstowego.
{
    ifstream wczytaj("dane.txt");
    wczytaj.open("dane.txt");
    wczytaj >> ryba;
    if (grunt)
    {
        wczytaj >> grunt;
    }
    else if (splawik)
    {
        wczytaj >> splawik;
    }
    wczytaj.close();
}

void menu() /// menu poczatkowe
{
    system("cls");

    char buffer[256] = {0};
    char percent[7] = "0.0%%";
    int i, j, k;
    buffer[0] = '[';
    for (i = 0; i < 40; i++)
    {
        buffer[i + 1] = '=';
        j = i % 4;
        if (j == 0)
            buffer[i + 2] = '>';
        else if (j == 1)
            buffer[i + 2] = '>';
        else if (j == 2)
            buffer[i + 2] = '>';
        else
            buffer[i + 2] = '>';

        for (k = i + 3; k < 41; k++)
            buffer[k] = ' ';

        buffer[41] = ']';

        sprintf(percent, " %3.2f%%", (i / 40.0) * 100.0);

        printf("%s%s\r", buffer, percent);

        Sleep(90);
    }

    sprintf(percent, "%3.2f%%", (i / 40.0) * 100.0);

    printf("%s%s\r", buffer, percent);

    string tekst =  "		 Witamy w Poradniku dla Poczatkujacych Wedkarzy \n \n"
                    "W celu unikniecia zerwan przez zaczepy doradza sie kupno wytrzymalszej zylki \n \n"
                    "Przy zakupie zylek patrz na ich jakosc !!! \n \n"
                    "Jeziora: \n \n"
                    "[1]-Lanskie \n"
                    "[2]-Sek \n"
                    "[3]-Zalesie \n"
                    "[4]-Gim \n \n"
                    "Obliczanie zanety: \n"
                    "[5]-Na ryby biale \n"
                    "[6]-Na ryby drapiezne \n \n"
                    "[7]-Idz na ryby \n"
                    "[8]-Lowienie ryb(wersja beta) \n"
                    "[9]-Czyszczenie wyboru \n \n"
                    "[10]-Wyjscie \n \n"
                    "Wybierz Opcje: ";

    for (int i = 0; i < tekst.length(); i++) // pętla wykonuje sie od 0 do długości tekstu wprowadzonego w zmiennej tekst
    {
        cout << tekst[i]; // wyświetlanie na ekranie po kolei każdej litery
        Sleep(20);        // tym regulujesz szybkość pisania, wartość w ms
    }
    cout << endl; // znak końca linii
}
void menu1()
{
    cout << "		 Witamy w Poradniku dla Poczatkujacych Wedkarzy \n \n";
    cout << "W celu unikniecia zerwan przez zaczepy doradza sie kupno wytrzymalszej zylki \n \n";
    cout << "Przy zakupie zylek patrz na ich jakosc !!! \n \n";
    cout << "Jeziora: \n \n";
    cout << "[1]-Lanskie \n";
    cout << "[2]-Sek \n";
    cout << "[3]-Zalesie \n";
    cout << "[4]-Gim \n \n";
    cout << "Obliczanie zanety: \n";
    cout << "[5]-Na ryby biale \n";
    cout << "[6]-Na ryby drapiezne \n \n";
    cout << "[7]-Idz na ryby \n";
    cout << "[8]-Lowienie ryb(wersja beta) \n";
    cout << "[9]-Czyszczenie wyboru \n \n";
    cout << "[10]-Wyjscie \n \n";
    cout << "Wybierz Opcje: ";
}

void backToMenuFunction() { system("cls"); std::cout << "Powrot do menu..." << std::endl; }

void infoAboutSuspendProgram(const string &info) {
                cout << "" << endl;
                cout << "Nacisnij Enter, " << info;
                cin.sync();cin.get();
}
