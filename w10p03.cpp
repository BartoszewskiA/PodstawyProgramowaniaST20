#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    string s;
    int x,y;
    float v;
    plik.open("dane.txt", ios::in);
    getline(plik,s);
    x=atoi(s.c_str());
    getline(plik,s);
    y=atoi(s.c_str());
    getline(plik,s);
    v=atof(s.c_str());
    cout<<x+y+v;
    plik.close();
    return 0;
}