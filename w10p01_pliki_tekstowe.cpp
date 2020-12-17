#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    string s;
    plik.open("dane.txt", ios::in);
    if (!plik.good())
    {
        cout<<"brak pliku";
        return 0;
    }
    while (!plik.eof())
    {
    getline(plik,s);
    if (s.length()>0)
        cout<<s<<endl;
    }
    plik.close();
    return 0;
}