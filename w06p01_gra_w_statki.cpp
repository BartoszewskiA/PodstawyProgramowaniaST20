#include <iostream>

using namespace std;

// 0 - puste pole       ->1
// 1 - pudlo            --
// 2 - odkryty statek   ->3
// 3 - trafiony statek  --
// 7 - ukryty statek    ->3

int plansza[10][10] = {
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    7, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 7, 7, 7, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 2, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 7, 7, 7, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 2, 3, 2, 7, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 0};

void rysuj_plansze(bool odkryj = false);
void strzal(string w, int k);
void sprawdz_sasiednie(int x, int y);
bool sprawsz_czy_koniec();

int main()
{
    string wiersz;
    int kolumna;
    do
    {
        rysuj_plansze();
        cout<<"Podaj litere: ";
        cin>>wiersz;
        if (wiersz=="x")
        {
            rysuj_plansze(true);
            break;
        }
        cout<<"Podaj liczbe: ";
        cin>>kolumna;
        strzal(wiersz, kolumna);
    } while (!sprawsz_czy_koniec());    //while (wiersz != "x");
    return 0;
}

void strzal(string w, int k)
{
    int x = k - 1;
    char znak = w[0];
    int y = (int)znak -65;
    switch (plansza[y][x])
    {
    case 0:
        plansza[y][x] = 1;
        break;
    case 2:
        plansza[y][x] = 3;
        break;
    case 7:
        plansza[y][x] = 3;
        break;
    }
    sprawdz_sasiednie(x,y);
}

void sprawdz_sasiednie(int x, int y)
{
    if(x>0 && plansza[y][x-1]==7) plansza[y][x-1]=2;
    if(x<9 && plansza[y][x+1]==7) plansza[y][x+1]=2;
    if(y>0 && plansza[y-1][x]==7) plansza[y-1][x]=2;
    if(y<9 && plansza[y+1][x]==7) plansza[y+1][x]=2;
}

bool sprawsz_czy_koniec()
{

    for (int i=0; i<10; i++)
        for (int j=0; j<10; j++)
            if (plansza[i][j]==7)
            {
               return false;
            }
    return true;
}

void rysuj_plansze(bool odkryj)
{
    system("cls");

    cout << endl;
    cout << "  ";
    for (int i = 1; i <= 10; i++)
        cout << " " << i << " ";
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << (char)(i + 65) << " ";
        for (int j = 0; j < 10; j++)
            switch (plansza[i][j])
            {
            case 0:
                cout << " . ";
                break;
            case 1:
                cout << " * ";
                break;
            case 2:
                cout << (char)176 << (char)176 << (char)176;
                break;
            case 3:
                cout << (char)176 << "#" << (char)176;
                break;
            case 7:
                if (odkryj)
                {
                    cout << (char)219 << (char)219 << (char)219;
                    break;
                }
                else
                {
                    cout << " . ";
                    break;
                }
            }
        cout << endl;
    }
}