#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout<<"Podaj tekst: ";
    getline(cin,s);
    // wyszukiwanie znkow metoda 1 (przegladanie lancucha)
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]=='a') cout<<i<<" ";
    }
    return 0;
}