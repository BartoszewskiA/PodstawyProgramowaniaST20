#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab[6];
    int n = 0, temp;
    bool flaga;
    do
    {
        flaga= false;
        temp= rand()%49+1;
        for (int i=0; i<n; i++)
            if (tab[i]==temp) flaga = true;
        if (!flaga) //flaga==false
        {
            tab[n]=temp;
            n++;
        }
    } while (n<6);
    for (int i=0; i<6; i++)
        cout<<tab[i]<<" ";
    return 0;
}