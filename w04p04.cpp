#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int tab [100];
    int ld=0, lu=0, sd=0,su=0;
    for (int i=0; i<100; i++)
        tab[i]=rand()%151 - 50;
    for (int i=0; i<100; i++)
        cout<<tab[i]<<" ";

    for (int i=0; i<100; i++)
    if(tab[i]>=0)
        {
            ld++;
            sd+=tab[i]; //sd=sd+tab[i];
        }
        else
        {
            lu++;
            su+=tab[i];
        }
    cout<<endl;
    cout<<"dodatnich bylo: "<<ld<<" srednia: "<<(double)sd/ld<<endl;
    cout<<"ujemnych bylo: "<<lu<<" srednia: "<<(double)su/lu;
    return 0;
}