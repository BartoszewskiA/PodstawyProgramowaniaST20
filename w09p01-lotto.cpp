#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;
bool kule[50];

void przygotuj_tablice();
int losuj_liczbe();
void losuj_zaklad(int ile);

int main()
{
    srand(time(NULL));
    int l;
    cout<<"Ile zakladow: ";
    cin>>l;
    for (int i=0; i<l; i++)
        losuj_zaklad(6);
    return 0;
}

void przygotuj_tablice()
{
    for (int i=0; i< 50; i++)
        {
            kule[i]=true;
        }
}

int losuj_liczbe()
{
    int poz;
    do
    {
        poz = rand()%49+1;
    } while (!kule[poz]); //kule[poz]==false 
    kule[poz]=false;
    return poz;
}

void losuj_zaklad(int ile)
{
    przygotuj_tablice();
    for (int i=0; i<ile; i++)
        cout<<losuj_liczbe()<<" ";
    cout<<endl;
}

