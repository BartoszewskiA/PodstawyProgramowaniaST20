#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout<<"Podaj tekst: ";
    getline(cin,s);
    // wyszukiwanie znkow metoda 2 (metody klasy string)
    int poz=-1;
    do
    {
        poz= s.find('a',poz+1);
        if (poz>=0) cout<<poz+1<<" ";
    } while (poz>=0);
    

    return 0;
}