#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    plik.open("wynik.txt", ios::out);
    plik<<22<<endl;
    int x = 30;
    plik<<x<<endl;
    plik<<3.5<<endl;
    plik<<"cccccc"<<endl;
    plik.close();
    return 0;
}