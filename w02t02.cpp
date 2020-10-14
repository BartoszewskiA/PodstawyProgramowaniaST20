#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    double mianownik = 1;
    double suma = 0;
    for (int i = 1; i <= n; i++)
    {
        mianownik = mianownik * 2;
        suma = suma + (1.0 / mianownik);
        cout << mianownik << " ";
    }
    cout << "x" << n << "=" << suma;
    return 0;
}