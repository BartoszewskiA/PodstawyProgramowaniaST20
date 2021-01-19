#include <iostream>

using namespace std;

int main()
{
    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
    };
    osoba ktos = {"Aaaaa", "Bbbbbbbb", 30};

    // ktos.imie = "Jan";
    // ktos.nazwisko = "Kowalski";
    // ktos.wiek = 40;

    cout << "Imie: " << ktos.imie << endl
         << "Nazwisko: " << ktos.nazwisko << endl
         << "Wiek: " << ktos.wiek << endl;

    return 0;
}