#include <iostream>

using namespace std;
void zwieksz(int* p);

int main()
{
    int tab[] = {0,1,2,3,4,5,6,7,8,9};

    zwieksz(tab);

    //cout<<*(tab+9);
    int* p = tab;
    for (int i=0; i<10; i++)
    {
        cout<<*p<<" ";
        p++;
    }
    return 0;
}

void zwieksz(int* p)
{
    for (int i=0; i<10; i++)
    {
        p[i]+=10;
    }
}