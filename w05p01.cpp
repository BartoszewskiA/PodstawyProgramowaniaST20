#include <iostream>

using namespace std;

void przedstaw_sie();
void dodaj_i_wypisz(int, int);
int dodaj(int x, int y);

int main()
{
    przedstaw_sie();
    int a=10,b=20;
    dodaj_i_wypisz(a, b);
    // int x = dodaj(100, 200);
    // cout << x << endl;   
    cout << dodaj(100,200);
    
    return 0;
}

void przedstaw_sie()
{
    cout << "To ja, funkcja" << endl;
}

void dodaj_i_wypisz(int x, int y)
{
    cout << x + y << endl;
}

int dodaj(int x, int y)
{
    cout << "dzialam!";
    int wynik = x + y;
    return wynik; // return x+y;
}
