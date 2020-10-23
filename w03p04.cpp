#include <iostream>

using namespace std;

int main()
{
    int i = 0, x, suma=0;
    do
    {
        cout<<i+1<<" : ";
        cin >> x;
        if (x>=0) 
        {
            suma=suma+x;
            i++;
        }
    } while (x>=0);
    cout<<"liczb bylo: "<<i<<endl;
    cout<<"suma="<<suma<<endl;
    cout<<"srednia="<<(double)suma/i;
    return 0;
}