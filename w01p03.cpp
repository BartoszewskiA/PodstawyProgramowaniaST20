#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    double x1, x2;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;
    int delta = b * b - 4 * a * c;
    if (delta > 0)
    {
        x1 = (-b - sqrt(delta)) / (2 * a);
        x2 = (-b + sqrt(delta)) / (2 * a);
        cout << "x1=" << x1 << endl
             << "x2=" << x2;
    }
    else if (delta == 0)
    {
        x1 = (-b) / (2 * a);
        cout << "x0" << x1;
    }
    else
    {
        cout << "brak rozwiazan w zbiorze liczb rzeczywistych";
    }
}