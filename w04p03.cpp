#include <iostream>

using namespace std;

int main()
{
    int x;
    int tab[32];
    cout << "x=";
    cin >> x;
    int n = 0;
    do
    {
        tab[n] = x % 2;
        x = x / 2;
        n++;
    } while (x > 0);

    for (int i = n - 1; i >= 0; i--)
        cout << tab[i];
    return 0;
}