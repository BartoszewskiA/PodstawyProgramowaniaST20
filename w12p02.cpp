#include <iostream>

using namespace std;
void zwieksz(int* px);

int main()
{
    int x = 100;
    zwieksz(&x);
    cout<<x;
    return 0;
}

void zwieksz(int* px)
{
    //*px=*px+1;
    (*px)++;
}