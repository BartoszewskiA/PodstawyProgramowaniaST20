#include <iostream>

using namespace std;
void zwieksz(int &x);
int zwieksz2(int x);

int main()
{
    int a = 10;
    zwieksz(a);
    cout << "po zwiekszeniu a=" << a << endl;
    int b = 100;
    b = zwieksz2(b);
    cout << "po zwiekszeniu b=" << b;
    return 0;
}

void zwieksz(int &x)
{
    x++;
}

int zwieksz2(int x)
{
    return ++x;
}