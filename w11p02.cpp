#include <iostream>
#include <string>

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

    cout << "Podaj wiek: ";
    cin >> ktos.wiek;
    cout << "Podaj imiona: ";
    getline(cin,ktos.imie); // za pierwszym razem nie zadziała 
    getline(cin,ktos.imie);
    cout << "Podaj nazwisko: ";
    cin >> ktos.nazwisko;

    cout << "Imie: " << ktos.imie << endl
         << "Nazwisko: " << ktos.nazwisko << endl
         << "Wiek: " << ktos.wiek << endl;

    return 0;
}