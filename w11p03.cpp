#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    struct osoba
    {
        string imie;
        string nazwisko;
        int wiek;
    };
    osoba ktos;

    string temp;
    stringstream bufor;

    cout << "Podaj wiek: ";
    getline(cin, temp);
    bufor << temp;
    bufor >> ktos.wiek;
    cout << "Podaj imiona: ";
    getline(cin,ktos.imie);
    cout << "Podaj nazwisko: ";
    getline(cin, ktos.nazwisko);

    cout << "Imie: " << ktos.imie << endl
         << "Nazwisko: " << ktos.nazwisko << endl
         << "Wiek: " << ktos.wiek << endl;

    return 0;
}