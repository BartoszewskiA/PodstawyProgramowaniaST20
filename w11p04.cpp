#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

const int L_PRAC = 2;

int main()
{
    osoba pracownicy[L_PRAC];

    string temp;
    stringstream bufor;

    for (int i = 0; i < L_PRAC; i++)
    {
        cout << "Podaj imiona: ";
        getline(cin, pracownicy[i].imie);
        cout << "Podaj nazwisko: ";
        getline(cin, pracownicy[i].nazwisko);
        cout << "Podaj wiek: ";
        getline(cin, temp);
        bufor << temp;
        bufor >> pracownicy[i].wiek;
    }

    for (int i = 0; i < L_PRAC; i++)
    {
        cout << "Imie: " << pracownicy[i].imie << endl
             << "Nazwisko: " << pracownicy[i].nazwisko << endl
             << "Wiek: " << pracownicy[i].wiek << endl;
    }

    return 0;
}