#include <iostream>

using namespace std;

int main()
{
    int nr;
    cout << "Podaj numer dnia tygodnia: ";
    cin >> nr;
    switch (nr)
    {
    case 1:
        cout << "PN";
        break;
    case 2:
        cout << "WT";
        break;
    case 3:
        cout << "SR";
        break;
    case 4:
        cout << "Czw";
        break;
    case 5:
        cout << "Pi";
        break;
    case 6:
        cout << "So";
        break;
    case 7:
        cout << "Ni";
        break;
    default:
        cout << "To nie jest prawidlowy numer";
    }
    return 0;
}