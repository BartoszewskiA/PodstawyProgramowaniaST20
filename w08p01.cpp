#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie_nazwisko, imie, nazwisko;
    cout<<"Przedstaw sie: ";
    getline(cin,imie_nazwisko);
    int poz_spacji = imie_nazwisko.find(' ');
    imie=imie_nazwisko.substr(0,poz_spacji);
    nazwisko = imie_nazwisko.substr(poz_spacji+1,imie_nazwisko.length()-(poz_spacji+1));
    if (imie[imie.length()-1]=='a')
        cout<<"Witam Pania ";
    else
        cout<<"witam Pana ";
    
    cout<<nazwisko;

    return 0;
}