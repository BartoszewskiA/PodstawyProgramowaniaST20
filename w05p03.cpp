#include <iostream>

using namespace std;
void wypisz(int a, int b, int c=0, int d=0);

int main()
{
    wypisz(10,100);
    return 0;
}

void wypisz(int a, int b, int c, int d)
{
    cout << "a= " << a << endl
         << "b= " << b << endl
         << "c= " << c << endl
         << "d= " << d << endl;
}