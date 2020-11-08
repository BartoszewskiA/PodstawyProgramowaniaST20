#include <iostream>

using namespace std;

int main()
{
    int tab[100] ={0};
    int n;
    cout<<"n=";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<i<<":";
        cin>>tab[i];
    }
    for (int i=0; i<100; i++)
    {
        cout<<tab[i]<<" ";
    }
    return 0;
}