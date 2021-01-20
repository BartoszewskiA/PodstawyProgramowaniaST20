#include <iostream>

using namespace std;

int main()
{
    int dana = 100;
    int* wskaznik;
    wskaznik = &dana;

    cout<< *wskaznik;
    return 0;
}