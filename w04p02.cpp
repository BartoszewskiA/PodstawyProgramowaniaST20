#include <iostream>

using namespace std;

int main()
{
    int tab[10][10];
    for (int j=0; j<10; j++)
    {
        for (int i = 0; i < 10; i++)
            tab[j][i] = (j+1)*(i+1);
    }
    
    for(int j=0; j<10; j++)
    {
        for (int i=0; i<10; i++)
            cout<<tab[j][i]<<"\t";
        cout<<endl;
    }
    return 0;
}