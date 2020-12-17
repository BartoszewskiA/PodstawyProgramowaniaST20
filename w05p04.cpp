#include <iostream>

using namespace std;
// int srednia(int, int); - tak nie można
double srednia(int, int);
double srednia(int, int, int);
double srednia(double, double);

    int main()
{
    cout << srednia(10, 23) << endl;
    cout << srednia(100, 200, 300) << endl;
    cout << srednia(1.5, 2.9) << endl;
    return 0;
}

double srednia(int a, int b)
{
    cout<<"v.1  ";
    return (a + b) / 2.0;
}


double srednia(int a, int b, int c)
{
    cout << "v.2  ";
    return (a+b+c)/3.0;
}

double srednia( double x, double y)
{
    cout << "v.3  ";
    return (x+y)/2;
}

// int srednia(int a, int b)
// {
//     cout << "v.4  ";
//     return (a + b) / 2;
// }